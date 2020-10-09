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


ll p[300000];
ll x,a,y,b,k;

ll sol(int r){
    int cntxy = 0,cntx = 0,cnty = 0;
    ll kf = 0;
    for(int i = 1;i <= r;i ++){
        if(i % a == 0 && i % b == 0)
            cntxy ++;
        else if(i % a == 0)
            cntx ++;
        else if(i % b == 0)
            cnty ++;
    }
    for(int i = 1;i <= cntxy;i ++)
        kf += (p[i] * (x + y));
    for(int i = 1;i <= cntx;i ++)
        kf += (p[i + cntxy] * x);
    for(int i = 1;i <= cnty;i ++)
        kf += (p[i + cntx + cntxy] * y);
    return kf;
}



int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        for(int i = 1;i <= n;i ++)
            cin >> p[i];
        cin >> x >> a >> y >> b >> k;
        k *= 100;
        sort(p + 1,p + n + 1,greater<int>());
        if(x < y){
            swap(x,y);
            swap(a,b);
        }
        int l = 1,r = n;
        int ok = 0,ans = 1e6,c = 0;
        while(l <= r){
            int mid = (l + r) / 2;
            ll x = sol(mid);
            if(x < k)
                l = mid + 1;
            else{
                r = mid - 1;
                ok = 1;
                ans = min(ans,mid);
            }
            // cout << l << " " << r << "\n";
            // c ++;
        }
        if(ok)
            cout << ans << "\n";
        else
            cout << "-1\n";
    }
    

    return 0;
}