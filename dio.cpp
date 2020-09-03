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


ll x,y;
ll dio(ll a,ll b){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    ll d = dio(b,a % b);
    ll tmp = x;
    x = y;
    y = tmp - y * (a / b);
    return d;
}
void shift_sol(ll a,ll b,ll cnt){
    x += cnt * b;
    y -= cnt * a;
}



int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t --){
        ll a,b,c;
        cin >> a >> b >> c;
        ll g = dio(abs(a),abs(b));
        if(c % g){
            cout << "No solution1\n";
            return 0;
        }
        x *= (c / g);
        y *= (c / g);
        if(a < 0)
            x = -x;
        if(b < 0)
            y = -y;
        cout << x << " " << y << "\n";
        a /= g;
        b /= g;
        ll minx,maxx,miny,maxy,lx1,rx1,lx2,rx2;
        cin >> minx >> maxx >> miny >> maxy;
        shift_sol(a,b,(minx - x) / b);
        if(x < minx){
            if(b > 0)
                shift_sol(a,b,1);
            else
                shift_sol(a,b,-1);    
        }
        if(x > maxx){
            cout << "No Solution2\n";
            return 0;
        }
        lx1 = x;
        shift_sol(a,b,(maxx - x) / b);
        if(x > maxx){
            if(b > 0) 
                shift_sol(a,b,-1);
            else
                shift_sol(a,b,1);
        }
        rx1 = x;
        shift_sol(a,b,(miny - y) / a);
        if(y < miny){
            if(a > 0)
                shift_sol(a,b,-1);
            else
                shift_sol(a,b,1);
        }
        if(y > maxy){
            cout << "No Solution3\n";
            return 0;
        }
        lx2 = x;
        shift_sol(a,b,(maxy - y) / a);
        if(y > maxy){
            if(a > 0)
                shift_sol(a,b,1);
            else
                shift_sol(a,b,-1);
        }
        rx2 = x;
        if(lx2 > rx2)
            swap(lx2,rx2);
        ll lx,rx;
        cout << lx1 << " " << lx2 << " " << rx1 << " " << rx2 << "\n";
        lx = max(lx1,lx2);
        rx = min(rx1,rx2);
        // cout << lx << " " << rx << " ";
        if(lx > rx){
            cout << "No Soltuion4\n";
            return 0;
        }
        cout << "Num of sol :   ";
        cout << (rx - lx) / abs(b) + 1 << "\n";
    }
    

    return 0;
}