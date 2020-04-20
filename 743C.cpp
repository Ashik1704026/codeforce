#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n <= 1){
        cout << "-1\n";
        return 0;
    }
    else{
        cout << n << " " << n + 1 << " " << n * 1ll * (n + 1) << "\n"; 
    }
    return 0;
}