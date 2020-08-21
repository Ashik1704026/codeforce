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
        ll a,b,c,d,x,y,x1,y1,x2,y2;
        cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 
        >> x2 >> y2;
        int f = 1;
        if(x1 == x2 && y1 == y2)
            f = 0;
        if(x1 == x && x == x2 && (a || b))
            f = 0;
        if(y == y1 && y == y2 && (c || d))
            f = 0;
        if(a > b){
            a -= b;
            x -= a;
            if(x < 0 && x1 < 0){
                if(abs(x) > abs(x1))
                    f = 0;
            }
            else if(x < x1)
                f = 0;
        }
        else{
            b -= a;
            x += b;
            if(x2 < 0 && x < 0){
                if(abs(x) < abs(x2))
                    f = 0;
            }
            else if(x > x2)
                f = 0;
        } 
        if(c > d){
            c -= d;
            y -= c;
            if(y1 < 0 && y < 0){
                if(abs(y) > abs(y1))
                    f = 0;
            }
            else if(y < y1)
                f = 0;
        }
        else{
            d -= c;
            y += d;
            if(y < 0 && y2 < 0){
                if(abs(y) < abs(y2))
                    f = 0;
            }
            else if(y > y2)
                f = 0;
        }
        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    



    return 0;
}