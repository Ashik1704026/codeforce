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
        int a[n + 10],b[n + 10],c[m + 10];
        for(int i = 0;i < n;i ++)
            cin >> a[i];
        for(int i = 0;i < n;i ++)
            cin >> b[i];
        for(int i = 0;i < m;i ++)
            cin >> c[i];
        int ok = 0;
        vctri v[n + 10];
        for(int i = 0;i < n;i ++){
            if(a[i] != b[i])
                v[b[i]].pb(i);
        }
        int ans[m + 10];
        ans[m - 1] = 0;
        if((int)v[c[m - 1]].size() > 0){
            ans[m - 1] = v[c[m - 1]].back();
            v[c[m - 1]].pop_back();
            ok = 1;
        }
        else{
            for(int j = 0;j < n;j ++){
                if(b[j] == c[m - 1]){
                    ans[m - 1] = j;
                    ok = 1;
                    break;
                }
            }
        }
        for(int i = 0;i < m - 1;i ++){
            if((int)v[c[i]].size() == 0)
                ans[i] = ans[m - 1];
            else{
                ans[i] = v[c[i]].back();
                v[c[i]].pop_back(); 
            }
        }
        for(int i = 1;i <= n;i ++){
            if((int)v[i].size() > 0)
                ok = 0;
        }
        if(ok == 0)
            cout << "NO\n";
        else{
            cout << "YES\n";
            for(int i = 0;i < m;i ++)
                cout << ans[i] + 1 << " ";
            cout << "\n";
        }
        
    }
    

    return 0;
}