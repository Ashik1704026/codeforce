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
    int t;
    cin >> t;
    while(t --){
        int h,c,tp;
        ll cnt;
        cin >> h >> c >> tp;
        double d1,d2,d3,x,s;
        if(h == tp){
            cout << "1\n";
            continue;
        }
        if((h + c) / 2 == tp){
            cout << "2\n";
            continue;
        }
        x = ((h - tp) * 1.0) / (2 * tp - h - c);
        cnt = abs(ceil(x * 1.0));
        s = ((h * (cnt + 1)) + (c * cnt)) / ((2 * cnt * 1.0) + 1);
        d1 = abs(tp - s);
        cnt = abs(floor(x *1.0));
        s = ((h * (cnt + 1)) + (c * cnt)) / ((2 * cnt * 1.0) + 1);
        d2 = abs(tp - s);
        d3 = abs(tp - ((h + c) * 1.0) / 2.0);
        if(d1 < d2){
            if(d1 < d3)
                cout << abs(ceil(x * 1.0)) * 2 + 1 << "\n";
            else
                cout << "2\n";
        }
        else{
            if(d2 < d3)
                cout << cnt * 2 + 1<< "\n";
            else
                cout << "2\n";
        }
    }
     


    return 0;
}