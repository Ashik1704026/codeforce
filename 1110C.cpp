#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q --){
        long a;
        cin >> a;
        long b = 1,x = 0;
        for(int i = 0;i < 25 && x + (1 << i) < a;i ++){
            if((a & (1 << i)) == 0){
                x += (1 << i);
            }
        }
        if(x){
            long long gcd = a ^ x;
            cout << gcd << "\n";
        }
        else if(!x){
            long long gcd = 1;
            long srt = sqrt(a * 1.0);
            for(long long i = 2;i <= srt;i ++){
                if(a % i == 0){
                    gcd = max(gcd,i);
                    gcd = max(gcd,(a / i));
                }
            }
            cout << gcd << "\n";
        }
    }


    return 0;
}