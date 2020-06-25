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

ll n,m,k;
string str[50000];
int visited[5000][5000];
void X(int i,int j){
    if(i < 0 || i >= n || j < 0 || j >= m || str[i][j] != '.' || visited[i][j] == 1)
        return;
    visited[i][j] = 1;
    X(i + 1,j);
    X(i,j + 1);
    X(i - 1,j);
    X(i,j - 1);
    if(k){
        str[i][j] = 'X';
        k --;
    }
}


int main(){
    fast;
    cin >> n >> m >> k;
    for(int i = 0;i < n;i ++)
        cin >> str[i];
    ll dot = 0;
    for(int j,i = 0;i < n;i ++){
        for(j = 0;j < m;j ++)
            if(str[i][j] == '.'){
                X(i,j);
                break;
            }
        if(j < m)
            break;
    }
    for(int i = 0;i < n;i ++)
        cout << str[i] << "\n";
    


    return 0;
}
