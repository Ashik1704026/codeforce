
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
    int n,k;
    cin >> n >> k;
    int ar[n + 10];
    for(int i = 1;i <= n;i ++)
        cin >> ar[i];
    // sort(ar,ar + n);
    int mn = 999999;
    vctri sol;
    int x = 0;
    while(x < k){
        int l = ar[1],li = 1,r = ar[1],ri = 1;
        for(int i = 1;i <= n;i ++){
            if(ar[i] < l){
                l = ar[i];
                li = i;
            }
            if(ar[i] > r){
                r = ar[i];
                ri = i;
            } 
        }
        if(l == r){
            mn = 0;
            break;
        }
        else if(li != ri){
            ar[li] ++;
            ar[ri] --;
            r = *max_element(ar + 1,ar + n + 1);
            l = *min_element(ar + 1,ar + n + 1);
            // sort(ar,ar + n);
            // cout << r << " " << l << " ";
            mn = min(mn,abs(r - l));
            sol.pb(ri);
            sol.pb(li);
            x ++;
        }
    } 
    cout << "\n" << mn << " " << x << "\n";
    for(int i = 0;i < sol.size();i += 2)
        cout << sol[i] << " " << sol[i + 1] << "\n";


    return 0;
}