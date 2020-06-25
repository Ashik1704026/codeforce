
// #include<bits/stdc++.h>
// using namespace std;

// #define         ll         long long
// #define         pb         push_back
// #define         scn(x)     scanf("%d",&x)
// #define         scnl(x)    scanf("%lld",&x)
// #define         prnt(x)    printf("%d\n",x)
// #define         prntl(x)   printf("%lld\n",x)
// #define         prii       pair<int,int>
// #define         mapii      map<int,int>
// #define         mapll      map<ll,ll>
// #define         mapci      map<char,int>
// #define         mapcl      map<char,ll>
// #define         mapsi      map<string,int>
// #define         mapsl      map<string,ll>
// #define         prll       pair<ll,ll>
// #define         vctri      vector<int>
// #define         vctrl      vector<ll>
// #define         vctrd      vector<double,double>
// #define         all(a)     (a).begin(),(a).end()
// #define         rall(a)    (a).rbegin(),(a).rend()
// #define         F          first
// #define         S          second
// #define         mp         make_pair
// #define         ftc(x)     cerr << #x << ": " << x << " " << '\n';
// #define         PI         acos(-1)
// #define         lcm(a,b)   ((a*b)/__gcd(a,b))
// #define         fast       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define         sqr(a)     ((a)*(a))
// #define         memset(x,v) memset(x, v, sizeof(x))
// #define         ask         '\n'
// #define         negmod(x,y) ((x % y) + y) % y    

// vector<bool> isPrime(10000010, true);
// inline void seivePrime(ll L, ll R) { ll lim = sqrt(R);for (ll i = 2; i <= lim; ++i){
//         for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
//             isPrime[j - L] = false;}if (L == 1)isPrime[0] = false;}
// inline ll chckPrime(ll L,ll prme){return isPrime[prme - L];}
// inline ll cntPrime(ll L,ll R){return count(isPrime.begin(),isPrime.begin() + R - L + 1,true);}



// int main(){
//     fast;
//     int t;
//     cin >> t;
//     while(t --){
//         ll n,k;
//         cin >> n >> k;
//         ll ar[n + 10];
//         int f = 0;
//         for(int i = 0;i < n;i ++){
//             ll a;
//             cin >> a;
//             if(a == k)
//                 ar[i] = 1,f = 1;
//             else if(a < k)
//                 ar[i] = 0;
//             else
//                 ar[i] = 2;
//         }
//         if(!f){
//             cout << "no\n";
//             continue;
//         }
//         else if(n == 1){
//             cout <<"yes\n";
//             continue;
//         }
//         f = 0;
//         for(int i = 0;i < n;i ++){
//             for(int j = i + 1;j < n && j - i <= 2;j ++){
//                 if(ar[i] && ar[j])
//                     f = 1;
//             }
//         }
//         if(f)
//             cout << "yes\n";
//         else
//             cout << "no\n";
        
//     }




//     return 0;
// }



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
        ll n,k;
        cin >> n >> k;
        ll ar[n + 10];
        vctrl v;
        for(int i = 0;i < n;i ++){
            cin >> ar[i];
            if(ar[i] == k)
                v.pb(i);
        }
        int f = 0;
        int sz = v.size();
        if(!sz){
            cout << "no\n";
            continue;
        }
        else if(n == 1){
            cout << "yes\n";
            continue;
        }
        // else{
            for(auto x : v){
                if(x == 0){
                    if(n == 1)
                        f = 1;
                    else if(ar[x] <= ar[x + 1])
                        f = 1;
                }
                else if(x == n - 1){
                    if(ar[x] <= ar[x - 1])
                        f = 1;
                }
                else if(ar[x] <= ar[x + 1] || ar[x] <= ar[x - 1])
                    f = 1;
            }
        // }
        if(f)
            cout << "yes\n";
        else
            cout << "no\n";
    }




    return 0;
}