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
        int n;
        cin >> n;
        int ar[3 * n];
        int od = 0,ev = 0;
        vctri vod;
        vctri vev;
        for(int i = 0;i < 2 * n;i ++){
            cin >> ar[i];
            if(ar[i] & 1 == 1){
                ev ++;
                vev.pb(i);
            }
            else{
                od ++;
                vod.pb(i);
            }
        }
        if(ev % 2){
            int sz1 = vod.size();
            int sz2 = vev.size();
            int sz = min(sz1,sz2);
            
                for(int i = 1;i < sz1;i += 2)
                    cout << vod[i] + 1<< " " << vod[i + 1] + 1 << "\n";
                for(int i = 1;i < sz2;i += 2)
                    cout << vev[i] + 1 << " " << vev[i + 1] + 1 << "\n";
            // }
        }
        else{
            // cout << "a";
            int sz1 = vod.size();
            int sz2 = vev.size();
            // cout << sz1 << " " << sz2;
            if(sz1 != 0){
                for(int i = 2;i < sz1;i += 2)
                    cout << vod[i] + 1 << " " << vod[i + 1] + 1 << "\n";
                for(int i = 0;i < sz2;i += 2)
                    cout << vev[i] + 1 << " " << vev[i + 1] + 1 << "\n";
            }
            else{
                for(int i = 2;i < sz2;i += 2)
                    cout << vev[i] + 1 << " " << vev[i + 1] + 1 << "\n";
                for(int i = 0;i < sz1;i += 2)
                    cout << vod[i] + 1 << " " << vod[i + 1] + 1 << "\n";
            }
        }

    }
    
     


    return 0;
}

