// // MD. Ashiqur Rahman
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
//         string str;
//         cin >> str;
//         int cur = 0,x = 0;
//         ll s = 0;
//         for(int i = 0;i <= str.size();i ++){
            
//             if(cur < 0){
//                 x ++;
//                 s += i;
//                 cur = 0;
//             }
//             s ++;
//             if(str[i] == '+')
//                 cur ++;
//             if(str[i] == '-')
//                 cur --;
//             // cout << s << " " << cur << "\n";
//         }
//         cout << s - 1 << "\n";
//     }



//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define pb push_back
#define mp make_pair
#define mem(x) memset(x, 0, sizeof(x))

const ll inf=1e18;
const int mod=1e9+7;
inline int bigmod(int B,int P){int R=1;while(P>0){if(P&1){R=(R*B)%mod;}P>>=1;B=(B*B)%mod;}return R;}
//const int mxn;

int main(){
    fast;

    int t;
    cin>>t;
    while(t--) {
        ll a,b,c;
        cin>>a>>b>>c;
        if(c <= a) {
			cout<<-1<<" "<<b<<endl;
		}
		else if(a*b <= c) {
			cout<<1<<" "<<-1<<endl;
		}
		else cout<<1<<" "<<b<<endl;
    }



return 0;
}
