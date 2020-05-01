#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        long n;
        cin >> n;
        long x = 3;
        for(int i = 2;i <= 28;i ++){
            if(n % x == 0){
                cout << n / x << "\n";
                break;
            }
            x += (1 << i);
        }
        cout << x;
    }


    return 0;
}