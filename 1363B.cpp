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
        string str;
        int cnt = 0;
        cin >> str;
        int sz = str.size();
        int f1 = 0,f2 = 0;
        int ar[10000],br[10000],cr[10000],dr[10000];
        vctri v;
        for(int i = 1;i < sz;i ++){
            if(str[i] != str[i - 1])
                v.pb(i);
        }
        for(int i = 0;i < sz;i ++){
            if(str[i] == '0')
                f1 ++;
            else
                f2 ++;
            ar[i] = f1;
            br[i] = f2;
        }
        int s1 = 0,s2 = 0,sol = min(f1,f2);
        for(int i = 0;i < sz;i ++){
            s1 = ar[i] + br[sz - 1] - br[i];
            s2 = br[i] + ar[sz - 1] - ar[i];
            s1 = min(s1,s2);
            sol = min(s1,sol);
            // cout << ar[i] << " " << dr[i] << " " << br[i] << " " << cr[i] << "\n";
        }
        // if(v.size() < 2)
        //     cout << "0\n";
        // else
            cout << sol << "\n";
    }
     


    return 0;
}