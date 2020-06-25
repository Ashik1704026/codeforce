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
        ll n;
        cin >> n;
        if(n < 4)
            cout << "-1\n";
        else if(n == 4)
            cout << "3 1 4 2\n";
        else{
            
            for(int i = 1;i <= n;i += 2)
                cout << i << " ";
            if(n % 2){
                cout << n - 3 << " " << n - 1 << " ";
                for(int i = n - 5;i >= 2;i -= 2)
                    cout << i << " ";
            }
            else{
                cout << n - 4 << " " << n << " " << n - 2 << " ";
                for(int i = n - 6;i >= 2;i -= 2)
                    cout << i << " ";
            }
            cout << "\n";
        }
    }


    


    return 0;
}