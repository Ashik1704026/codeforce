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
        int ar[n][m],b[n][m];
        for(int i = 0;i < n;i ++){
            for(int j = 0;j < m;j ++)
                cin >> ar[i][j];
        }
        memset(b,0);
        set<prii> v;
        int ok = 1;
        for(int i = 0;i < n;i ++){
            for(int j = 0;j < m;j ++){
                if(ar[i][j] == 1){
                    int x = 1,y = 1,z = 1,w = 1,k = 1;
                    pair<int,int> a,b,c,d,e,f,g,h;
                    a.F = b.F = c.F = i - 1;
                    g.F = f.F = e.F = i + 1;
                    a.S = h.S = g.S = j - 1;
                    c.S = d.S = e.S = j + 1;
                    b.S = f.S = j;
                    h.F = d.F = i;
                    if(a.F >= 0 && a.F <= n - 1
                    && a.S >= 0 && a.S <= m - 1){
                        if(ar[a.F][a.S] == 0)
                            x = 0;
                        if(ar[b.F][b.S] == 0)
                            x = 0;
                        if(ar[h.F][h.S] == 0)
                            x = 0;
                        if(x == 1 && k){
                            v.insert(mp(a.F,a.S));
                            k = 0;
                        }
                    }
                    else
                        x = 0;
                    if(c.F >= 0 && c.F <= n - 1
                    && c.S >= 0 && c.S <= m - 1){
                        if(ar[c.F][c.S] == 0)
                            y = 0;
                        if(ar[b.F][b.S] == 0)
                            y = 0;
                        if(ar[d.F][d.S] == 0)
                            y = 0;
                        if(y == 1 && k){
                            v.insert(mp(b.F,b.S));
                            k = 0;
                        }
                    }
                    else
                        y = 0;
                    if(e.F >= 0 && e.F <= n - 1
                    && e.S >= 0 && e.S <= m - 1){
                        if(ar[e.F][e.S] == 0)
                            z = 0;
                        if(ar[d.F][d.S] == 0)
                            z = 0;
                        if(ar[f.F][f.S] == 0)
                            z = 0;
                        if(z == 1 && k){
                            v.insert(mp(i,j));
                            k = 0;
                        }
                    }
                    else
                        z = 0;
                    if(g.F >= 0 && g.F <= n - 1
                    && g.S >= 0 && g.S <= m - 1){
                        if(ar[g.F][g.S] == 0)
                            w = 0;
                        if(ar[f.F][f.S] == 0)
                            w = 0;
                        if(ar[h.F][h.S] == 0)
                            w = 0;
                        if(w == 1 && k){
                            v.insert(mp(h.F,h.S));
                            k = 0;
                        }
                    }
                    else
                        w = 0;
                    if(x == 0 && y == 0 && z == 0 && w == 0)
                        ok = 0;
                }

            }
        }
        if(ok){
            cout << v.size() << "\n";
            for(auto val : v)
                cout << val.F + 1 << " " << val.S + 1 << "\n";
        }
        else
            cout << "-1\n";

    }
    

    return 0;
}