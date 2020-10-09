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


ll MOD;
inline void modulas(ll a) {MOD = a;}
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }


vector<bool> isPrime(10000010, true);
inline void seivePrime(ll L, ll R) { ll lim = sqrt(R);for (ll i = 2; i <= lim; ++i){
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;}if (L == 1)isPrime[0] = false;}
inline ll chckPrime(ll L,ll prme){return isPrime[prme - L];}
inline ll cntPrime(ll L,ll R){return count(isPrime.begin(),isPrime.begin() + R - L + 1,true);}


int ar[500000];
int n,q;
int f1(int i){
    int x = i;
    for(int j = i;j < n - 1;j ++){
        if(ar[j] < ar[j + 1])
            x = j + 1;
        else
            break;
    }
    return x;
}
int f2(int i){
    int x = i;
    for(int j = i;j < n - 1;j ++){
        if(ar[j] > ar[j + 1])
            x = j + 1;
        else
            break;
    }
    return x;
}


int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t --){
        cin >> n >> q;
        for(int i = 0;i < n;i ++)
            cin >> ar[i];
        int y = 1;
        vctrl v;
        for(int i = 0;i < n;i ++){
            if(y == 1){
                int x = f1(i);
                v.pb(ar[x]);
                i = x;
                y = 2;
            }
            else if(y == 2){
                int x = f2(i);
                v.pb(ar[x]);
                i = x;
                y = 1;
            }
        }
        ll sum = 0;
        // for(auto x : v)
        //     cout << x << " ";
        // cout << "\n";
        if(v.size() % 2 == 1){
            y = 1;
            for(auto x : v){
                if(y == 1){
                    sum += x;
                    y = 2;
                }
                else{
                    sum -= x;
                    y = 1;
                }
            }
        }
        else{
            for(int i = 0;i < v.size() - 1;i ++){
                if(y == 1){
                    sum += v[i];
                    y = 2;
                }
                else{
                    sum -= v[i];
                    y = 1;
                }
            }
        }
        cout << sum  << "\n";
         
    }
    

    return 0;
}