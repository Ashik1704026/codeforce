
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

vector<bool> isPrime(10000010, true);
inline void seivePrime(ll L, ll R) { ll lim = sqrt(R);for (ll i = 2; i <= lim; ++i){
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;}if (L == 1)isPrime[0] = false;}
inline ll chckPrime(ll L,ll prme){return isPrime[prme - L];}
inline ll cntPrime(ll L,ll R){return count(isPrime.begin(),isPrime.begin() + R - L + 1,true);}



int visited[200000];
int t = 1;
vctri g[200000];
int path[200000];
void dfs(int x){
    path[t ++] = x;
    visited[x] = 1;
    for(auto y : g[x]){
        if(!visited[y])
            dfs(y);
    }
}

int main(){
    fast;
    int n;
    cin >> n;
    ll ar[4][n + 10];
    memset(ar[1],0);
    memset(ar[2],0);
    memset(ar[3],0);
    ll sol[n + 10];
    ll clr[n + 10];
    for(int i = 1;i <= 3;i ++)
        for(int j = 1;j <= n;j ++)
            cin >> ar[i][j];
    for(int i = 1;i < n;i ++){
        int a,b;
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    int strt;
    for(int i = 1;i <= n;i ++){
        if(g[i].size() > 2){
            cout << "-1\n";
            return 0;
        }
        if(g[i].size() == 1)
            strt = i;
    }
    dfs(strt);
    // for(int i = 1;i <= n;i ++)
    //     cout << path[i] << " ";
    // cout << "\n";
    ll ans = 1e18 + 10;
    for(int i = 1; i<= 3;i ++)
        for(int j = 1;j <= 3;j ++)
            for(int k = 1;k <= 3;k ++)
                if(i != j && i != k && j!= k){
                    ll sum = 0;
                    for(int h = 1;h <= n;h += 3){
                        sum += ar[i][path[h]] + ar[j][path[h + 1]] + ar[k][path[h + 2]];
                        // cout << ar[i][path[h]] << " " << ar[j][path[h + 1]] << " " << ar[k][path[h + 2]] << " ";
                    }
                    // cout << i << j << k << sum << " ";
                    // cout << "\n";
                    if(ans > sum){
                        ans = sum;
                        sol[1] = i,sol[2] = j,sol[0] = k;
                    }
                }
    cout << ans << "\n";
    for(int i = 1;i <= n;i ++)
        clr[path[i]] = sol[i % 3];
    for(int i = 1;i <= n;i ++)
        cout << clr[i] << " ";
    

    return 0;
}