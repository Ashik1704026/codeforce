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
    // cin >> t;
    while(t --){
        int R,G,B;
        cin >> R >> G >> B;
        int r[R + 10],g[G + 10],b[B + 10];
        for(int i = 1;i <= R;i ++)
            cin >> r[i];
        for(int i = 1;i <= G;i ++)
            cin >> g[i];
        for(int i = 1;i <= B;i ++)
            cin >> b[i];
        ll dp[R + 10][G + 10][B + 10];
        memset(dp,0);
        ll sum = 0;
        sort(r + 1,r + R + 1);
        sort(g + 1,g + G + 1);
        sort(b + 1,b + B + 1);
        for(int i = 0;i <=R ;i ++){
            for(int j = 0;j <= G ;j ++){
                for(int k = 0;k <= B;k ++){
                    if(i && j)
                        dp[i][j][k] = max(dp[i][j][k],dp[i - 1][j - 1][k] + r[i] * g[j]);
                    if(i && k)
                        dp[i][j][k] = max(dp[i][j][k],dp[i - 1][j][k - 1] + r[i] * b[k]);
                    if(j && k)
                        dp[i][j][k] = max(dp[i][j][k],dp[i][j - 1][k - 1] + g[j] * b[k]);
                    sum = max(sum,dp[i][j][k]);
                }
            }
        }
        cout << sum << "\n";
    }
    



    return 0;
}