#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int gcd = 1;
    if(n == 3){
        cout << "1 1 3\n";
        return 0;
    }
    while(n){
        if(n == 3){
            cout << gcd << " " << gcd << " " << gcd * 3;
            return 0;
        }
        for(int i = 1;i <= n;i += 2)
            cout << gcd << " ";
        n /= 2;
        gcd *= 2;
    }


    return 0;
}