#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin >> tst;
    while(tst --){
        int x,n,m;
        cin >> x >> n >> m;
        int cnt = 0;
        while(x > (m * 10) && cnt < n){
            x = (x / 2) + 10;
            cnt ++;
        }
        if(x - (m * 10) > 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}