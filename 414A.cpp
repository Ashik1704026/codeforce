#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,k;
    cin >> n >> k;
    if(n == 1 && k == 0){
        cout << "1";
        return 0;
    }
    if(k < n / 2 || n == 1){
        cout << "-1\n";
        return 0;
    }
    long x = k - (n / 2) + 1;
    cout << x << " " << x * 2 << " ";
    long f = 0;
    int i = 1;
    for(;f < (n - 2) / 2;i += 2){
        if(i == x || i == 2 * x || i + 1 == x || i + 1 == 2 * x) 
            continue;
        cout <<i << " " << i + 1 << " ";
        f += 1; 
    }
    if(n % 2){
        while(i == x || i == 2 * x)
            i ++;
        cout << i;
    }
    return 0;
}