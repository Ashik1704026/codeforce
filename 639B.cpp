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
    int n,d,h;
    cin >> n >> d >> h;
    if(d > 2 * h)
        cout << "-1\n";
    else if(h == d){
        if(h == 1 && n > 2)
            cout << "-1\n";
        else{
            for(int i = 1;i <= h;i ++)
                cout << i << " " << i + 1 << "\n"; 
            for(int i = 1;i < n - d;i ++)
                cout << "2 " << d + i + 1 << "\n";
        }
    }
    else{
        for(int i = 1;i <= h;i ++)
            cout << i << " " << i + 1 << "\n";
        int s = 1;
        for(int i = 1;i <= d - h;i ++){
            cout << s << " " << h + i + 1 << "\n";
            s = h + i + 1;
        }
        for(int i = 1;i < n - d;i ++)
            cout << "1 " << d + i + 1 << "\n";
    }


    return 0;
}