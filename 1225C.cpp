#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,p;
    cin >> n >> p;
    for(int i = 0;i <= 29;i ++){
        long kp = n - (i * p);
        bitset<32> b(kp);
        int x = b.count();
        if(x <= i && i <= kp){
            cout << i;
            return 0;
        }
    }
    cout << "-1";


    return 0;
}