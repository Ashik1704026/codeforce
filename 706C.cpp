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



int main(){
    fast;
    ll n;
    cin >> n;
    ll ar[n + 10];
    ll dp[n + 10][3];
    for(int i = 0;i <= n;i ++)
        memset(dp[i],0);
    for(int i = 1;i <= n;i ++)
        cin >> ar[i];
    string str[n + 10][2];
    for(int i = 1;i <= n;i ++){
        cin >> str[i][0];
        str[i][1] = str[i][0];
        reverse(str[i][1].begin(),str[i][1].end());
        for(int j = 0;j < 2;j ++){
            dp[i][j] = 1e18;
            for(int k = 0;k < 2;k ++){
                if(str[i][j] >= str[i - 1][k])
                    dp[i][j] = min(dp[i][j],dp[i - 1][k] + j * ar[i]);
            }
        }
    }
    // cout << dp[n][0] << " " << dp[n][1];
    (min(dp[n][0],dp[n][1]) == 1e18)? cout << "-1" :
    cout << min(dp[n][0],dp[n][1]) << "\n";
    


    return 0;
}