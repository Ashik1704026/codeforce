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

int dist[110];
vctri gv[110];
void dfs(int s){
    for(auto x : gv[s]){
        if(dist[s] + 1 < dist[x]){
            dist[x] = dist[s] + 1;
            dfs(x);
        }
    }
}



int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t --){
        int n;
        cin >> n;
        string s = "";
        for(int i = 1;i <= n;i ++){
            cin >> s;
            s = '#' + s;
            for(int j = 1;j <= n;j ++){
                if(s[j] == '1')
                    gv[i].pb(j);
            }
        }
        int m;
        cin >> m;
        int p[m + 10];
        for(int i = 1;i <= m;i ++)
            cin >> p[i];
        int path[110][110];
        for(int i = 0;i <= 101;i ++){
            for(int j = 0;j <= 101;j ++)
                path[i][j] = 1e7;
        }
        for(int i = 1;i <= n;i ++){
            for(int j = 0;j <= n;j ++)
                dist[j] = 1e7;
            dist[i] = 0;
            dfs(i);
            for(int j = 1;j <= n;j ++)
                path[i][j] = dist[j];
        }
        vctri sol;
        sol.pb(p[1]);
        int y = 1;
        for(int i = 3;i <= m;i ++){
            int x = sol.back();
            if(path[x][p[i]] < i - y){
                sol.pb(p[i - 1]);
                y = i - 1;
            }
        }
        sol.pb(p[m]);
        cout << sol.size() << "\n";
        for(auto x : sol)
            cout << x << " ";
    }
    

    return 0;
}