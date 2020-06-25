
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
    int n,w;
    cin >> n >> w;
    int ar[n + 10],br[w + 10];
    for(int i = 1;i <= n;i ++)
        cin >> ar[i];
    for(int i = 1;i <= w;i ++)
        cin >> br[i];
    int f[2000] = {0};
    vector<pair<int,int> > v;
    int x = 0;
    for(int i = 1;i <= w;i ++){
        if(!f[br[i]]){
            v.pb(mp(ar[br[i]],br[i]));
            f[br[i]] = 1;
        }

    }
    // for(int i = 0;i < v.size();i ++)
    //     cout << v[i].F << " " << v[i].S << "\n";
    int sz = v.size();
    ll s = 0;
    for(int i = 1;i <= w;i ++){
        for(int j = 0;j < sz;j ++){
            if(v[j].S == br[i]){
                int tmp1 = v[j].F;
                int tmp2 = v[j].S;
                v.erase(v.begin() + j);
                v.insert(v.begin(),mp(tmp1,tmp2));
                break;
            }
            // cout << v[0].S << "a";
            s += v[j].F;
        }
        // cout << s << " ";
    }
    cout << s;




    return 0;
}