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


vector<prii> sol;
int n,m;
int ar[200][200];
void func1(vector<prii> v,vector<prii> v0,int i,int j){
    sol.pb({v0[0].F,v0[0].S});
    sol.pb({v0[1].F,v0[1].S});
    sol.pb({v[0].F,v[0].S});
    ar[v0[0].F][v0[0].S] = 1;
    ar[v0[1].F][v0[1].S] = 1;
    ar[v[0].F][v[0].S] = 0;
}
void func2(vector<prii> v,vector<prii> v0,int i,int j){
    sol.pb({v0[0].F,v0[0].S});
    sol.pb({v0[1].F,v0[1].S});
    sol.pb({v[0].F,v[0].S});
    ar[v0[0].F][v0[0].S] = 1;
    ar[v0[1].F][v0[1].S] = 1;
    ar[v[0].F][v[0].S] = 0;
}
void func3(vector<prii> v,vector<prii> v0,int i,int j){
    sol.pb({v[0].F,v[0].S});
    sol.pb({v[1].F,v[1].S});
    sol.pb({v[2].F,v[2].S});
    ar[v[0].F][v[0].S] = 0;
    ar[v[1].F][v[1].S] = 0;
    ar[v[2].F][v[2].S] = 0;
}
void func4(vector<prii> v,vector<prii> v0,int i,int j){
    sol.pb({v[0].F,v[0].S});
    sol.pb({v[1].F,v[1].S});
    sol.pb({v[2].F,v[2].S});
    ar[v[0].F][v[0].S] = 0;
    ar[v[1].F][v[1].S] = 0;
    ar[v[2].F][v[2].S] = 0;
}




int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t --){
        cin >> n >> m;
        string str[n + 10];
        for(int i = 0;i < n;i ++)
            cin >> str[i];
        for(int i = 0;i < n;i ++){
            for(int j = 0;j < m;j ++)
                ar[i][j] = str[i][j] - '0';
        }
        for(int i = 0;i < n - 1;i ++){
            for(int j = 0;j < m - 1;j ++){
                int x = 0;
                do{
                    vector<prii>v,v0;
                    if(ar[i][j] == 1)
                        v.pb({i,j});
                    else
                        v0.pb({i,j});
                    if(ar[i][j + 1] == 1)
                        v.pb({i,j + 1});
                    else
                        v0.pb({i,j + 1});
                    if(ar[i + 1][j] == 1)
                        v.pb({i + 1,j});
                    else
                        v0.pb({i + 1,j});
                    if(ar[i + 1][j + 1] == 1)
                        v.pb({i + 1,j + 1});
                    else
                        v0.pb({i + 1,j + 1});
                    x = v.size();
                    if(x == 1)
                        func1(v,v0,i,j);
                    if(x == 2)
                        func2(v,v0,i,j);
                    if(x == 3)
                        func3(v,v0,i,j);
                    if(x == 4)
                        func4(v,v0,i,j);
                    // cnt ++;
                    // cout << ar[0][0] << " " << ar[0][1] << "\n";
                    // cout << ar[1][0] << " " << ar[1][1] << "\n" << x << "\n";

                }
                while(x != 0);
                
            }
        }
        cout << sol.size() / 3 << "\n";
        for(int i = 0;i < sol.size();i += 3){
            cout << sol[i].F + 1 <<" " << sol[i].S + 1 << " ";
            cout << sol[i + 1].F + 1 << " " << sol[i  +1].S + 1 << " ";
            cout << sol[i + 2].F + 1 << " " << sol[i + 2].S + 1 << "\n";
        }
    sol.clear();    
    }
    

    return 0;
}