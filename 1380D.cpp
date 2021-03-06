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
        int n,m;
        cin >> n >> m;
        ll x,k,y;
        cin >> x >> k >> y;
        int ar[n + 10],br[n + 10];
        for(int i = 0;i < n;i ++)
            cin >> ar[i];
        for(int i = 0;i < m;i ++)
            cin >> br[i];
        ll res = 0,lst = -1,posa = 0,posb = 0;
        while(posb < m){
            while(posa < n && ar[posa] != br[posb]) ++ posa;
            if(posa == n){
                cout << "-1\n";
                return 0;
            }
            ll l = lst + 1,r = posa - 1;
            ll len = r - l + 1;
            if(l > r){
                lst  = posa;
                posb ++;
                continue;
            }
            int check = 0,mx = *max_element(ar + l,ar + r + 1);
            if(l - 1 >= 0 && ar[l - 1] > mx) check = 1;
            if(r + 1 < n && ar[r + 1] > mx) check = 1;
            if(len < k && !check){
                cout << "-1\n";
                return 0;
            }
            int need = len % k;
            res += need * y;
            len -= need;
            if(k * y < x && check)
                res += len * y;
            else if(k * y >= x)
                res += (len / k) * x;
            else if(len >= k)
                res += (len - k) * y + x;
            posb ++;
            lst = posa;
        }
        ll l = lst + 1,r = n - 1;
        ll len = r - l + 1;
        if(l <= r){
            int check = 0,mx = *max_element(ar + l,ar + r + 1);
            if(l - 1 >= 0 && ar[l - 1] > mx) check = 1;
            if(r + 1 < n && ar[r + 1] > mx) check = 1;
            if(len < k && !check){
                cout << "-1\n";
                return 0;
            }
            int need = len % k;
            res += need * y;
            len -= need;
            if(k * y < x && check)
                res += len * y;
            else if(k * y >= x)
                res += (len / k) * x;
            else if(len >= k)
                res += (len - k) * y + x;
        }
        cout << res << "\n";
    }

    return 0;
}