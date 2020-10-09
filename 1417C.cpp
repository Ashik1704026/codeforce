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
        int n;
        cin >> n;
        vctri g[n + 100];
        set<int> s;
        int ar[n + 100];
        for(int i = 1;i <= n;i ++)
            g[i].pb(0);
        for(int i = 1;i <= n;i ++){
            int a;
            cin >> a;
            ar[i] = a;
            g[a].pb(i);
            s.insert(a);
        }
        int mn = 1e6;
        int ans[n + 100];
        for(int i = 0;i <= n + 10;i ++)
            ans[i] = 1e6;
        for(auto x : s){
            int mx = 0;
            g[x].pb(n + 1);
            if(g[x].size() > 1){
                for(int i = 1;i < g[x].size();i ++)
                    mx = max(mx,g[x][i] - g[x][i - 1]);
            }
            if(mx != 0){
                ans[mx] = min(ans[mx],x);
                mn = min(mn,mx);
            }
        }
        int fmn = mn;
        int mnar[n + 100];
        mn = 1e6;
        for(int i = 0;i <= n;i ++)
            mnar[i] = mn;
        int x = (n / 2) + 1;
        int y = x;
        if(n & 1){
            mnar[x] = ar[x];
            mn = ar[x];
            int j = x - 1;
            for(int i = x + 1;i <= n;i ++){
                mn = min(mn,ar[i]);
                mn = min(mn,ar[j --]);
                mnar[i] = mn;
            }
        }
        else{
            mn = 1e6;
            mnar[x] = min(ar[x],ar[x - 1]);
            mn = mnar[x];
            int j = x - 2;
            for(int i = x + 1;i <= n;i ++){
                mn = min(mn,ar[i]);
                mn = min(mn,ar[j --]);
                mnar[i] = mn;
            }
        }
        mn = 1e6;
        vctri v;
        for(int i = 1;i < x && i < fmn;i ++)
            v.pb(-1);
        int fmnar[n + 100];
        mn = 1e6;
        for(int i = 0;i <= n;i ++){
            mn = min(mn,ans[i]);
            fmnar[i] = mn;
        }
        for(int i = fmn;i < x;i ++){
            v.pb(fmnar[i]);
        }
        for(int i = x;i <= n;i ++){
            int ss = min(fmnar[i],mnar[i]);
            v.pb(ss);
        }
        for(auto d : v)
            cout << d << " ";
        cout << "\n";

    }
    

    return 0;
}