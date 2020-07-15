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
        ll n,s,d,f = 1;
        cin >> n;
        ll ar[n];
        for(int i = 0;i < n;i ++)
            cin >> ar[i];
        if(n == 1){
            seivePrime(0,ar[0]);
            if(chckPrime(0,ar[0])){
                s = ar[0] * 1LL * ar[0];
                cout << s << "\n";
            }
            else
                cout << "-1\n";
            continue;
        }
        sort(ar,ar + n);
        s = ar[0] *1LL* ar[n - 1];
        d = s;
        if(n % 2){
            d = ar[n / 2] *1LL* ar[n / 2];
        }
        if(d != s)
            f = 0;
        for(int i = 1,j = n - 2;i < n / 2;i ++,j --){
            d = ar[i] * 1LL * ar[j];
            if(s != d)
                f = 0;
        }
        if(!f){
            cout << "-1\n";
            continue;
        }
        set<ll> v;
        for(int i = 2;i <= sqrt(s) ;i ++){
            if(s % i == 0){
                v.insert(i);
                v.insert(s / i);
            }
        }
        if(n != v.size())
            cout << "-1\n";
        else
            cout << s << "\n";
    }

    return 0;
}