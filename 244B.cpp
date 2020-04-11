#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin >> n;
    long long x,y,ans = 0;
    for(int i = 1;i <= 9;i ++){
        if(i <= n)
            ans ++;
            y = i;
        for(long long j = 10;x <= n;){
            x = y * j + 9;
            y = y * 10 + 1;
            if(n >= x)
                ans += 10;
            else if(y - 1 <= n){
                ans += n - y + 2;
                //cout << ans;
            }
        }
    }    
    cout << ans;



    return 0;
}