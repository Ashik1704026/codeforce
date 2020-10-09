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



int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t --){
        ll n,a,b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        ll ans = 0,sol = 0;
        int zero = 0,ind = 0,one = 0;
        for(int i = 0;i < s.size();i ++){
            if(s[i] == '0')
                zero ++;
            else{
                ind = i;
                break;
            }
        }
        if(ind != 0)
            sol += (zero - 1) * (b + a) + b + 2 * a;
        else
            sol += (zero + 1) * b + zero * a;
        ans = sol;
        zero = 0;
        // cout << sol << "\n";
        for(int i = ind;i < s.size();i ++){
            if(s[i] == '1'){
                one ++;
                if(zero >= 2){
                    sol += (zero - 1) * b + (zero - 2) * a + 4 * a;
                    ans += (zero - 1) * b * 2 + zero * a;
                }
                else if(zero == 1){
                    sol += a;
                    ans += a;
                }
                sol = min(sol,ans);
                ans = sol;
                zero = 0;
            }
            else if(s[i] == '0'){
                zero ++;
                if(one != 0){
                    sol += b * 2 * (one + 1) + one * a;
                    ans += b * 2 * (one + 1) + one * a;
                }
                one = 0;
            }
            // cout << sol << " " << ans << "\n";
        }
        if(ind != 0)
            sol += zero * b + (zero - 1) * a + 2 * a;
        cout << sol << "\n";

    }
    

    return 0;
}