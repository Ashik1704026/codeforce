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
    int n;
    int t = 1;
    // cin >> t;
    while(t --){
        int n;
        cin >> n;
        int ar[n + 10];
        int br[n + 10];
        for(int i = 0;i < n;i ++){
            int a;
            cin >> a;
            ar[a] = i + 1;
        }
        for(int i = 0;i < n;i ++){
            int a;
            cin >> a;
            br[a] = i + 1;
        }
        int cr[n + 10];
        cr[0] = -1;
        int mx = 0,cnt = 0;
        for(int i = 1;i <= n;i ++){
            if(ar[i] - br[i] < 0)
                cr[i] = ar[i] - br[i] + n;
            else
                cr[i] = ar[i] - br[i]; 
        }
        sort(cr + 1,cr + n + 1);
        for(int i = 1;i <= n;i++){
            if(cr[i] != cr[i - 1]){
                mx = max(mx,cnt);
                cnt = 0;
            }
            else
                cnt ++;
        }
        mx = max(mx,cnt);
        cout << mx + 1 << "\n";
    }
    
     


    return 0;
}
