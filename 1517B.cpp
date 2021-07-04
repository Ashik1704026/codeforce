// MD. Ashiqur Rahman
#include<bits/stdc++.h>
using namespace std;

#define         ll         long long
#define         pb         push_back
#define         scn(x)     scanf("%d",&x)
#define         scnl(x)    scanf("%lld",&x)
#define         prnt(x)    printf("%d\n",x)
#define         prntl(x)   printf("%lld\n",x)
#define         prii       pair<int,int>
#define         mapii      map<int,int>
#define         mapll      map<ll,ll>
#define         mapci      map<char,int>
#define         mapcl      map<char,ll>
#define         mapsi      map<string,int>
#define         mapsl      map<string,ll>
#define         prll       pair<ll,ll>
#define         vctri      vector<int>
#define         vctrl      vector<ll>
#define         vctrd      vector<double,double>
#define         all(a)     (a).begin(),(a).end()
#define         rall(a)    (a).rbegin(),(a).rend()
#define         F          first
#define         S          second
#define         mp         make_pair
#define         ftc(x)     cerr << #x << ": " << x << " " << '\n';
#define         PI         acos(-1)
#define         lcm(a,b)   ((a*b)/__gcd(a,b))
#define         fast       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define         sqr(a)     ((a)*(a))
#define         memset(x,v) memset(x, v, sizeof(x))
#define         ask         '\n'
#define         negmod(x,y) ((x % y) + y) % y 


ll MOD;
inline void modulas(ll a) {MOD = a;}
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }


vector<bool> isPrime(10000010, true);
inline void seivePrime(ll L, ll R) { ll lim = sqrt(R);for (ll i = 2; i <= lim; ++i){
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;}if (L == 1)isPrime[0] = false;}
inline ll chckPrime(ll L,ll prme){return isPrime[prme - L];}
inline ll cntPrime(ll L,ll R){return count(isPrime.begin(),isPrime.begin() + R - L + 1,true);}



int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t --){
        int n,m;
        cin >> n >> m;
        int bi[n + 10][m + 10];
        pair<ll,pair<ll,ll> > pth[n * m + 100];
        int x = 0;
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++){
                cin >> bi[i][j];
                pth[x ++] = {bi[i][j],{i,j}};
            }
        }
        sort(pth,pth + (n * m));
        // for(int i = 0;i < n * m;i ++)
        //     cout << pth[i].F << " " << pth[i].S.F << " " << pth[i].S.S << "\n";
        prii sol[n + 10][m + 10];
        int chk[n + 10][m + 10];
        for(int i = 0;i <= n;i ++){
            for(int j = 0;j <= m;j ++){
                sol[i][j].F = sol[i][j].S = 0;
                chk[i][j] = 0;
            }
        }
        int c = 1;    
        for(int i = 0;i < m;i ++){
            int a,b;
            a = pth[i].S.F;
            b = pth[i].S.S;
            sol[a][c ++] = {a,b}; 
            chk[a][b] = 1;
        }
        vctri v[n + 10];
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++){
                if(!chk[i][j]){
                    v[i].pb(j);
                }
            }
        }
        int d = m;
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++){
                if(sol[i][j].F == 0){
                    int vl = v[i].back();
                    v[i].pop_back();
                    sol[i][j] = {i,vl};
                }
                // cout << sol[i][j].F << sol[i][j].S << " ";
            }
            // cout << "\n";
        }
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++){
                int a,b;
                a = sol[i][j].F,b = sol[i][j].S;
                cout << bi[a][b] << " ";
            }
            cout << "\n";
        }
    }
    

    return 0;
}