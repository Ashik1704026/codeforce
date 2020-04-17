#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        long ar[n];
        long mn = -2e10,k = 0;
        for(int i = 0;i < n;i ++){
            cin >> ar[i];
            while(ar[i] + (1ll << k) - 1 < mn) k ++;
            mn = max(ar[i],mn);
        }
        cout << k << "\n";
    }



    return 0;
}