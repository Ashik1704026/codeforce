
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
    int t;
    cin >> t;
    while(t --){
        int n,m;
        cin >> n >> m;
        ll f = pow(2,m) - 1;
        vctrl v;
        for(int i = 0;i < n;i ++){
            string str;
            cin >> str;
            reverse(str.begin(),str.end());
            ll a = 0;
            for(int j = 0;j < m;j ++)
                if(str[j] == '1')
                    a += (1 << j);
            v.pb(a);
        }
        ll mid = f / 2;
        f += 1;
        for(auto x : v){
            if(x <= mid && f % 2 == 0)
                mid += 1;
            else if(x >= mid && f % 2)
                mid -= 1; 
            f --;
            // cout << mid << " " << f << " ";  
        }
        int r;
        string sol = "";
        if(mid == 0){
            for(int i = 0;i < m;i ++)
                cout << mid;
            cout << "\n";
        }
        else{
            while(mid != 0){
                sol += (mid % 2) + '0';
                mid = mid / 2;
            }
            reverse(sol.begin(),sol.end());
            if(sol.size() < m){
                for(int i = 0;i < m - sol.size();i ++)
                    cout << "0";
            }
            cout << sol << "\n";
        }
     }
     




    return 0;
}