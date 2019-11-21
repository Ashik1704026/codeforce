#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans = 0,j = 0;
    cin >> n;
    int ar[n+1];
    for(int i = 1;i <= n;i ++) cin >> ar[i];
    for(int i = 1;i <= n;i ++){
        int k,c = 0;
        k = ar[i] , c = 1;
        while (k > 0){
            k = ar[k] , c ++;
        }
        ans = max(ans,c);
    }
    cout << ans<<"\n";
}