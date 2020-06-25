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

vector<bool> isPrime(10000010, true);
inline void seivePrime(ll L, ll R) { ll lim = sqrt(R);for (ll i = 2; i <= lim; ++i){
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;}if (L == 1)isPrime[0] = false;}
inline ll chckPrime(ll L,ll prme){return isPrime[prme - L];}
inline ll cntPrime(ll L,ll R){return count(isPrime.begin(),isPrime.begin() + R - L + 1,true);}

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
bool visited[100][100];
int n,m,cnt = 0,f = 1;
string str[1000];
void dfs(int x,int y){
    if(str[x][y] == 'B' || str[x][y] == '#') f  = 0;
    if(str[x][y] == 'G') cnt --;
    visited[x][y] = 1;
    for(int d = 0;d < 4;d ++){
        int nr = dx[d] + x,ny = dy[d] + y;
        if(nr < 0 || nr == n || ny < 0 || ny  == m)
            continue;
        if(str[nr][ny] == '#')
            continue;
        if(str[nr][ny] == 'B')
            continue;
        if(visited[nr][ny])
            continue;
        dfs(nr,ny);
    }
    
}


int main(){
    fast;
    int t;
    cin >> t;
    while(t --){
        cin >> n >> m;
        memset(visited,0);
        f = 1;
        cnt = 0;
        for(int i = 0;i < n;i ++)
            cin >> str[i];
        for(int i = 0;i < n;i ++){
            for(int j = 0;j < m;j ++){
                if(str[i][j] == 'G')
                    cnt ++;
            }
        }
        for(int i = 0;i < n;i ++){
            for(int j = 0;j < m;j ++){
                if(str[i][j] == 'B'){
                    if(i - 1 >= 0 && str[i - 1][j] == '.' || 
                       i - 1 >= 0 && str[i - 1][j] == 'G' )
                        str[i - 1][j] = '#';
                    if(i + 1 < n && str[i + 1][j] == '.' ||
                       i + 1 < n && str[i + 1][j] == 'G')
                        str[i + 1][j] = '#';
                    if(j - 1 >= 0 && str[i][j - 1] == '.' ||
                       j - 1 >= 0 && str[i][j - 1] == 'G')
                        str[i][j - 1] = '#';
                    if(j + 1 < m && str[i][j + 1] == '.' ||
                       j + 1 < m && str[i][j + 1] == 'G')
                        str[i][j + 1] = '#';
                }
            }
        }
        // for(int i = 0;i < n;i ++){
        //     for(int j = 0;j < m;j ++){
        //        cout << str[i][j];
        //     }
        //     cout << "\n";
        // }
        if(cnt == 0){
            cout << "Yes\n";
            continue;
        }
        dfs(n - 1,m - 1);
        if(cnt == 0 && f)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
     


    return 0;
}
