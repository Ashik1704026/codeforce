#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define memset(x) memset(x, 0, sizeof(x))
#define lcm(a,b) a*b/__gcd(a,b)
#define mp make_pair
#define pb push_back

int main(){
    long long u,v;
    cin >> u >> v;
    if(u == 0 && v == 0)
        cout << "0\n";
    else if(u > v || (u % 2 != v % 2))
        cout << "-1\n";
    else{
        long long x = (v - u) / 2;
        if(x == 0)
            cout << "1\n" << u;
        else if((x & u) == 0){
            cout << "2\n";
            cout << u + x << " " << x << "\n";
        }  
        else{
            cout << "3\n";
            cout << u << " " << x << " " << x << "\n"; 
        }
    }



    return 0;
}