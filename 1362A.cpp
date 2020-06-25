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
    int t;
    cin >> t;
    while(t --){
        ll a,b;
        cin >> a >> b;
        ll ans = -1;
        int cnt1 = 0,cnt2 = 0;
        ll x = b,y = a;
        while(x % 2 == 0 && x > a){
            x /= 2;
            cnt1 ++;
        }
        while(y % 2 == 0 && y > b){
            y /= 2;
            cnt2 ++;
        }
        if(a > b){
            if(y != b)
                ans = -1;
            else{
                ans = cnt2 / 3;
                cnt2 %= 3;
                ans += cnt2 / 2;
                cnt2 %= 2;
                ans += cnt2; 
            }
        }
        else if(b > a){
            if(x != a)
                ans = -1;
            else{
                ans = cnt1 / 3;
                cnt1 %= 3;
                ans += cnt1 / 2;
                cnt1 %= 2;
                ans += cnt1; 
            }
        }
        else{
            ans = 0;
        }
        cout << ans << "\n";
        
    }
    
     


    return 0;
}