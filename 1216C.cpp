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


pair<prii,prii> intersect(prii a,prii b,prii c,prii d){
    int l,r,u,dw;
    l = max(min(a.F,b.F),min(c.F,d.F));
    dw = max(min(a.S,b.S),min(c.S,d.S));
    r = min(max(a.F,b.F),max(c.F,d.F));
    u = min(max(a.S,b.S),max(c.S,d.S));
    if(r <= l || u <= dw)
        return {{0,0},{0,0}};
    return {{l,dw},{r,u}};
}

ll square(prii a,prii b){
    return abs(a.F - b.F) *1LL* abs(a.S - b.S);
}



int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t --){
        prii p[6];
        for(int i = 0;i < 6;i ++)
            cin >> p[i].F >> p[i].S;
        pair<prii,prii> b1,b2,cb;
        b1 = intersect(p[0],p[1],p[2],p[3]);
        b2 = intersect(p[0],p[1],p[4],p[5]);
        cb = intersect(b1.F,b1.S,b2.F,b2.S);
        ll sqw = square(p[0],p[1]);
        ll sqb1 = square(b1.F,b1.S);
        ll sqb2 = square(b2.F,b2.S);
        ll sqcb = square(cb.F,cb.S);
        if(sqw > sqb1 + sqb2 - sqcb)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
    

    return 0;
}