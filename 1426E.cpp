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
        ll n;
        cin >> n;
        ll a1,a2,a3,b1,b2,b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        ll c1,c2,c3,d1,d2,d3;
        c1 = a1,c2 = a2,c3 = a3;
        d1 = b1,d2 = b2,d3 = b3;
        ll A,B,C;
        A = min(a1,b2);
        B = min(a2,b3);
        C = min(a3,b1);
        ll mx = 0;
        mx += min(a1,b2) + min(a2,b3) + min(a3,b1);
        if(A >= max(B,C)){
            ll s = 0;
            s += (a2 + a3) - b2;
            if(s <= 0)
                cout << abs(s) << " ";
            else{
                ll s2,s3;
                ll x = min(a2,b2);
                a2 -= x;
                b2 -= x;
                x = min(a3,b2);
                a3 -= x;
                b2 -= x;
                s = a2 + a3;
                s2 = s - (min(a2,b1) + min(a3,b3));
                x = min(c3,d2);
                c3 -= x;
                d2 -= x;
                x = min(c2,d2);
                c2 -= x;
                d2 -= x;
                s = c2 + c3;
                s3 = s - (min(c2,d1) + min(c3,d3));
                cout << min(s2,s3) << " ";
            }
        }
        else if(B >= max(A,C)){
            ll s = 0;
            s += (a1 + a3) - b3;
            if(s <= 0)
                cout << abs(s) << " ";
            else{
                ll s2,s3;
                ll x = min(a1,b3);
                a1 -= x;
                b3 -= x;
                x = min(a3,b3);
                a3 -= x;
                b3 -= x;
                s = a1 + a3;
                s2 = s - (min(a1,b1) + min(a3,b2));
                x = min(c3,d3);
                c3 -= x;
                d3 -= x;
                x = min(c1,d3);
                c1 -= x;
                d3 -= x;
                s = c1 + c3;
                s3 = s - (min(c1,d1) + min(c3,d2));
                cout << min(s2,s3) << " ";
            }
        }
        else if(C >= max(B,A)){
            ll s = 0;
            s += (a2 + a1) - b1;
            if(s <= 0)
                cout << abs(s) << " ";
            else{
                ll s2,s3;
                ll x = min(a1,b1);
                a1 -= x;
                b1 -= x;
                x = min(a2,b1);
                a2 -= x;
                b1 -= x;
                s = a1 + a2;
                s2 = s - (min(a2,b2) + min(a1,b3));
                x = min(c2,d1);
                c2 -= x;
                d1 -= x;
                x = min(c1,d1);
                c1 -= x;
                d1 -= x;
                s = c1 + c2;
                s2 = s - (min(c2,d2) + min(c1,d3));
                cout << min(s2,s3) << " ";
            }
        }
        cout << mx << "\n";
    }
    

    return 0;
}