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
        int n,x;
        cin >> n;
        int ar[n],sol[n],br[n],cr[n];
        for(int i = 0;i < n;i ++)
            cin >> ar[i],br[i] = ar[i];
        sort(br,br + n);
        if(br[0] == br[n - 1]){
            cout << "1\n";
            for(int i = 0;i < n;i ++)
                cout << "1 ";
            cout << "\n";
        }
        else if(n % 2 == 0 || ar[0] == ar[n - 1]){
            cout << "2\n";
            for(int i = 1;i <= n;i ++)
                if(i & 1)
                    cout << "1 ";
                else
                    cout << "2 ";
            cout << "\n";
        }
        else{
            int f = -1;
            for(int i = 1;i < n;i ++){
                if(ar[i] == ar[i - 1]){
                    f = i;
                    break;
                }
            }
            if(f == -1){
                cout << "3\n";
                for(int i = 1;i < n;i ++)
                    if(i & 1)
                        cout << "1 ";
                    else
                        cout << "2 ";
                cout << "3\n";
            }
            else{
                int x = 0;
                cout << "2\n";
                for(int i = 1;i <= n;i ++){
                    if(i == f){
                        if(!x)
                            x = 1,cout << "1 1 ";
                        else if(x == 1)
                            x = 2,cout << "2 2 ";
                        else
                            x = 1,cout << "1 1 ";
                        i ++;
                        continue;
                    } 
                    if(x == 0 || x == 2)
                        x = 1;
                    else if(x == 1)
                        x = 2;
                    cout << x << " ";
                }
                cout << "\n";
            }
        }
        
    }

    

    return 0;
}

