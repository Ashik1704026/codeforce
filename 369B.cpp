#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,r,sall,sk;
    cin >> n >> k >> l >> r >> sall >> sk;
    int b = n - k;
    int sb = sall - sk;
    while(sk !=0){
        cout << sk / k << " ";
        sk -= (sk / k);
        k -= 1;
    }
    while(sb !=0){
        cout << sb / b << " ";
        sb -= (sb / b);
        b -= 1;
    }


    return 0;
}