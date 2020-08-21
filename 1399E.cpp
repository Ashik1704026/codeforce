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

vctri g[200000];
int leaf[200000];
ll par[200000];


void dfs(int s,int p){
    par[s] = p;
    if(g[s].size() == 1)
        leaf[s] = 1;
    for(auto x : g[s]){
        if(x == p)
            continue;
        dfs(x,s);
        leaf[s] += leaf[x];
    }
}


ll getdif(ll s,ll lf){
    return (lf * 1LL * ((s / 2) - s));
}



int main(){
    fast;
    int t;
    cin >> t;
    while(t --){
        ll n,s;
        cin >> n >> s;
        map<prll,ll> w;
        for(int i = 0;i < n - 1;i ++){
            ll a,b,c;
            cin >> a >> b >> c;
            g[a].pb(b);
            g[b].pb(a);
            w[mp(a,b)] = c;
            w[mp(b,a)] = c;
        }
        dfs(1,0);
        // for(int i = 1;i <= n;i ++)
        //     cout << leaf[i] <<  " ";
        // cout << "\n";
        set<prll> dif;
        ll sum = 0;
        for(int i = 2;i <= n;i ++){
            int u = i;
            int v = par[u];
            ll curw = w[mp(v,u)];
            ll lf = leaf[u];
            sum += (lf *1LL* curw);
            dif.insert(mp(getdif(curw,lf),u));
            // value[u] = curw;
        }
        // cout << sum << "\n";
        // for(auto x : dif){
        //     cout << x.F << " " << x.S << "\n";
        // }
        int ans = 0;
        while(sum > s){
            prll x = *dif.begin();
            ll f = x.F;
            ll id = x.S;
            sum += f;
            dif.erase(x);
            int u = id;
            int v = par[u];
            w[mp(v,u)] /= 2;
            ll curw = w[mp(v,u)];
            ll lf = leaf[u];
            dif.insert(mp(getdif(curw,lf),u));
            ans ++;
        }
        cout << ans << "\n";
        for(int i = 0;i <= n;i ++)
            g[i].clear(),leaf[i] = 0,par[i] = 0;
        
    }
    



    return 0;
}