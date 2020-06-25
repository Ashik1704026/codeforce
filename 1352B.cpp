#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define memset(x,v) memset(x, v, sizeof(x))
#define lcm(a,b) a*b/__gcd(a,b)
#define mp make_pair
#define pb push_back

int main(){
    fast;
    int t;
    cin >> t;
    while(t --){
        ll n,k;
        cin >> n >> k;
        if(k > n)
            cout << "NO\n";
        else{
            ll s = n - k + 1;
            ll s1 = n - ((k - 1) * 2);
            if(s % 2 && s > 0){
                cout << "YES\n";
                for(int i = 1;i < k;i ++)
                    cout << "1 ";
                cout << s << "\n";
            }
            else if(s1 % 2 == 0 && s1 > 0){
                cout << "YES\n";
                for(int i = 1;i < k;i ++)
                    cout << "2 ";
                cout << s1 << "\n";
            }
            else
                cout << "NO\n";
        }
    }


    


    return 0;
}