#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        long n,s=0,m;
        cin >> n >> m;
        while(n --){
            int a;
            cin >> a;
            s += a;
        }
        cout << min(s,m) << "\n";
    }



    return 0;
}