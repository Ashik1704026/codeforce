#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int s=0,k=0;
    for(int i = 0;i <= n;i ++)
        for(int j = 0;j <= n;j ++){
            k=(n - (a * i) - (b * j));
            if(k >= 0 && k % c == 0) s = max(s,(k / c) + i + j);
        }
    cout <<  s;
}