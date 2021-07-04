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
        int a,b;
        cin >> a >> b;
        string s;
        cin >> s;
        int n = a + b;
        int x = 0,y = 0;
        int ok = 1;
        int chk[n + 10];
        memset(chk,0);
        for(int i = 0;i < n;i ++){
            if(s[i] == '0' && !chk[i]){
                if(s[n - i - 1] == '1')
                    ok = 0;
                s[n - i - 1] = '0';
                if(i == n - i - 1 && a % 2 == 0)
                    ok = 0;
                else if(i == n - i - 1 && a % 2)
                    x ++;
                else
                    x += 2;
                chk[i] = 1;
                chk[n - i - 1] = 1;
            }
            else if(s[i] == '1' && !chk[i]){
                if(s[n - i - 1] == '0')
                    ok = 0;
                s[n - i - 1] = '1';
                if(i == n - i - 1 && b % 2 == 0)
                    ok = 0;
                else if(i == n - i - 1 && b % 2)
                    y ++;
                else
                    y += 2;
                chk[i] = 1;
                chk[n - i - 1] = 1;
            }
        }
        cout << x << " " << y << "\n";
        while(1){
            if(x >= a)
                break;
            if(x + 1 == a){
                for(int i = 0;i < n;i ++){
                    if(i == n - i - 1 && !chk[i]){
                        if(s[i] == '?'){
                            s[i] = '0';
                            s[n - i - 1] = '0';
                            x += 1;
                        }
                        else if(s[i] == '1'){
                            ok = 0;
                            break;
                        }
                        chk[i] = 1;
                    }
                }
                
            }
            else{
                for(int i = 0;i < n;i ++){
                    if(s[i] == '?' && i != n - i - 1 && !chk[i] && x <= a - 2){
                        s[i] = '0';
                        s[n - i - 1] = '0';
                        x += 2;
                        chk[i] = chk[n - i - 1] = 1;
                        // cout << 'a';
                    }
                }
            }
            cout << x << " ";
        }
        cout << s << "\n";
        // while(1){
        //     if(y >= b)
        //         break;
        //     if(y + 1 == b){
        //         for(int i = 0;i < n;i ++){
        //             if(i == n - i - 1){
        //                 if(s[i] == '?'){
        //                     s[i] = '1';
        //                     y ++;
        //                 }
        //                 else if(s[i] == '0'){
        //                     ok = 0;
        //                     break;
        //                 }
        //             }
        //         }
        //     }
        //     else{
        //         for(int i = 0;i < n;i ++){
        //             if(s[i] == '?' && i != n - i - 1){
        //                 s[i] = '1';
        //                 s[n - i - 1] = '1';
        //                 y += 2;
        //             }
        //         }
        //     }
        // }
        if(ok && x == a && y == b)
            cout << s << "\n";
        else
            cout << "-1\n";        
        
    }
    

    return 0;
}