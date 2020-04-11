#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,l,xl,a;
    cin >> n >> l;
    xl = l;
    long long prce[n + 10];
    for(int i = 0;i < n;i ++)
        cin >> prce[i];
    for(int i = 0;i < n - 1;i ++){
        if(2 * prce[i] <= prce[i + 1])
            prce[i + 1] = 2 * prce[i];
    }
    long long sum1 = 0,sum2 = 1e18;
    for(int i = n - 1;i >= 0;i --){
        a = (1 << i);
        sum1 += prce[i] * (l / a);
        l %= a;
        sum2 = min(sum2,sum1 + ((l != 0) * prce[i]));
    }
    
    cout << sum2;


    return 0;
}