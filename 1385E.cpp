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


vctri g[210000];
vector<prii> edges;
int visited[210000];
vctri path;


void dfs(int s){
    visited[s] = 1;
    for(auto x : g[s])
        if(!visited[x])
            dfs(x);
    path.pb(s);
}


int main(){
    fast;
    int t;
    cin >> t;
    while(t --){
        int n,m;
        cin >> n >> m;
        memset(visited,0);
        for(int i = 0;i <= n;i ++)
            g[i].clear();
        edges.clear();
        while(m --){
            int a,u,v;
            cin >> a >> u >> v;
            if(a)
                g[u].pb(v);
            else
                edges.pb(mp(u,v));
        }
        for(int i = 1;i <= n;i ++)
            if(!visited[i])
                dfs(i);
        reverse(path.begin(),path.end());
        // for(auto x : path)
        //     cout << x << " ";
        vctri revpath(n + 10);
        for(int i = 0;i < n;i ++)
            revpath[path[i]] = i;
        int ok = 1;
        for(int i = 1;i <= n;i ++){
            for(auto x : g[i])
                if(revpath[i] > revpath[x])
                    ok = 0;
        }
        if(!ok)
            cout << "NO\n";
        else{
            cout << "YES\n";
            for(int i = 0;i < edges.size();i ++){
                int a = edges[i].F;
                int b = edges[i].S;
                if(revpath[a] < revpath[b])   
                    cout << a << " " << b << "\n";
                else
                    cout << b << " " << a << "\n";
            }
            for(int i = 1;i <= n; i++){
                for(auto x : g[i])
                    cout << i << " " << x << "\n";
            }
        }

    }
    



    return 0;
}

