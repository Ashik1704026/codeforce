
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


int mx = 0;
vctri edg[250000];
int x = 0;
int visited[250000];
void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s] = 1;
    while(!q.empty()){
        int z = q.front();
        q.pop();
        for(auto y : edg[z]){
            if(!visited[y]){
                visited[y] = 1;
                q.push(y);
                mx = max(mx,y);
                // cout << y << " ";
            }
        }
    }
}

int main(){
    fast;
    int n,m;
    cin >> n >> m;
    for(int i = 0;i < m;i ++){
        int a,b;
        cin >> a >> b;
        edg[a].pb(b);
        edg[b].pb(a);
    }
    ll s = 0;
    bfs(1);
    for(int i = 2;i <= n;i ++){
        if(!visited[i]){
            if(i < mx)
                s ++;
            bfs(i);
        }
    }
    cout << s;
    

    return 0;
}