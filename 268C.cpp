#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int ans = min(n,m);
    cout << ans + 1 << "\n";
    for(int i = 0;i <= min(n,m);i ++)
        cout << ans -- << " " << i << "\n";    

    return 0;
}