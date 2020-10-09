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
        ll n,l;
        cin >> n >> l;
        ll a[n + 10];
        for(int i = 0;i < n;i ++)
            cin >> a[i];
        pair<double,double> p[n + 10];
        for(int i = 0;i < n;i ++){
            if(i == 0)
                p[i].F = a[i];
            else{
                ll d = a[i] - a[i - 1];
                p[i].F = p[i - 1].F + ((d * 1.0) / (i + 1));
            }
        }
        for(int i = n - 1;i >= 0;i --){
            if(i == n - 1)
                p[i].S = l - a[i];
            else{
                ll d = a[i + 1] - a[i];
                p[i].S = p[i + 1].S + ((d * 1.0) / (n - i));
            }
            
        }
        double ans = 0.0;
        if(p[0].F > p[0].S){
            ans = p[0].S;
            double d = a[0] - p[0].S;
            ans += (d / (n + 2));
        }
        else if(p[n - 1].F < p[n - 1].S){
            ans = p[n - 1].F;
            double d = l - a[n - 1] - p[n - 1].F;
            ans += (d / (n + 2));
        }
        else{
            double d;
            for(int i = 1;i < n;i ++){
                if(p[i].F >= p[i].S && p[i - 1].F <= p[i - 1].S){
                    d = a[i] - a[i - 1];
                    if(p[i - 1].F < p[i].S){
                        ans = p[i].S;
                        d = d - (p[i].S - p[i - 1].F) * (i + 1);
                    }
                    else{
                        ans = p[i - 1].F;
                        d = d - (p[i - 1].F - p[i].S) * (n - i + 1);
                    }
                }
            }
            ans += (d / (n + 2));
        }
        cout << fixed << setprecision(10) << ans << "\n";
    }
    

    return 0;
}