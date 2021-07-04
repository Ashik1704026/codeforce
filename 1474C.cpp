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


vctri res(vctri a,int x,int n){
    multiset<int> ms;
    for(int i = 0;i < 2 * n;i ++)
        ms.insert(a[i]);
    vctri rs;
    for(int i = 0;i < n;i ++){
        auto it1 = ms.end();
        it1 --;
        int y = x - *it1;
        ms.erase(it1);
        auto it2 = ms.find(y);
        if(it2 == ms.end())
            return {};
        ms.erase(it2);
        rs.pb(x - y);
        rs.pb(y);
        x = max(y,x - y);
        // cout << *it1 << " " << y << " ";
    }
    return rs;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        vctri a;
        for(int i = 0;i < 2 * n;i ++){
            int x;
            cin >> x;
            a.pb(x);
        }
        sort(a.begin(),a.end());
        int ok = 1;
        for(int i = 0;i < 2 * n;i ++){
            int x = a[i] + a[2 * n - 1];
            vctri sol = res(a,x,n);
            if(sol.size() != 0){
                cout << "YES\n";
                cout << x << "\n";
                for(int j = 0;j < 2 * n - 1;j += 2)
                    cout << sol[j] << " " << sol[j + 1] << "\n";
                ok = 0;
                break;
            }
        }
        if(ok)
            cout << "NO\n";

    }
    

    return 0;
}