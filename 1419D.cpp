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
    // cin >> t;
    while(t --){
        ll n;
        cin >> n;
        int ar[n];
        for(int i = 0;i < n;i ++)
            cin >> ar[i];
        sort(ar,ar + n);
        vctrl s1,s2,s3,v1,v2;
        for(int i = 0;i < n / 2;i ++)
            s1.pb(ar[i]);
        for(int i = n / 2;i < n;i ++)
            s2.pb(ar[i]);
        s3 = s2;
        reverse(s3.begin(),s3.end());
        ll a,b,c,d,sol1 = 0,sol2 = 0;
        if(s2.size() != 0){
            a = s2.front();
            d = s3.front();
            s2.erase(s2.begin() + 0);
            s3.erase(s3.begin() + 0);
            v1.pb(a);
            v2.pb(d);
        }
        if(s1.size() != 0){
            b = s1.front();
            s1.erase(s1.begin() + 0);
            v1.pb(b);
            v2.pb(b);
        }
        if(s2.size() != 0){
            c = s2.front();
            d = s3.front();
            s2.erase(s2.begin() + 0);
            s3.erase(s3.begin() + 0);
            if(a != b && b != c)
                sol1 ++;
            if(a != b && b != d)
                sol2 ++;
            v1.pb(c);
            v2.pb(d);
        }
        while(s1.size() && s2.size()){
            a = s2.front();
            s2.erase(s2.begin() + 0);
            c = v1.back();
            d = v2.back();
            b = s1.front();
            s1.erase(s1.begin() + 0);
            if(a != b && b != c)
                sol1 ++;
            v1.pb(b);
            v1.pb(a);
            a = s3.front();
            s3.erase(s3.begin() + 0);
            if(a != b && b != d)
                sol2 ++;
            v2.pb(b);
            v2.pb(a);
        }
        while(s1.size() != 0){
            a = s1.back();
            s1.pop_back();
            v1.pb(a);
            v2.pb(a);
        }
        while(s2.size()){
            a = s2.back();
            s2.pop_back();
            v1.pb(a);
            a = s3.back();
            s3.pop_back();
            v2.pb(a);
        }
        if(sol1 > sol2){
            cout << sol1 << "\n";
            for(auto x : v1)
                cout << x << " ";
        }
        else{
            cout << sol2 << "\n";
            for(auto x : v2)
                cout << x << " ";
        }
        
    }
    

    return 0;
}