#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,flag = 1,ans;
    cin >> n;
    long long sq = sqrt(n * 1.0);
    for(long long i = 2;i <= sq;i ++){
        if(n % i == 0){
            long long p = n / i;
            long long x = __gcd(p,i);
            if(x == 1){
                cout << "1\n";
                return 0;
            }
            if(flag){
                ans = i;
                flag = 0;
            }
        }
    }
    if(flag == 0 && ans)
        cout << ans <<"\n";
    else
        cout << n <<"\n";

    return 0;
}