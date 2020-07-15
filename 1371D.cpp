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
    int t;
    cin >> t;
    while(t --){
        int n,k,x = 1;
        cin >> n >> k;
        int ar[n + 10][n + 10];
        memset(ar,0);
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                if(k && i == 1){
                    ar[j][j] = 1;
                    k --;
                }
                else if(k && j >= i){
                    ar[x ++][j] = 1;
                    k --;
                }
            }
            x = n - i + 2;
            if(k && i != 1){
                for(int l = 1;l < i;l ++){
                    if(k){
                        ar[x ++][l] = 1;
                        k --;
                    }
                }
            }
            x = 1;
        }
        ll ri [n + 10];
        ll ci[n + 10];
        memset(ri,0);
        memset(ci,0);
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                ri[i] += ar[i][j];
                ci[j] += ar[i][j];
            }
        }
        sort(ri + 1,ri + 1 + n);
        sort(ci + 1,ci + n + 1);
        ll a = sqr(ri[1] - ri[n]);
        ll b = sqr(ci[1] - ci[n]);
        cout << a + b << "\n";
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++)
                cout << ar[i][j];
            cout << "\n";
        }
    }

    return 0;
}