#include<bits/stdc++.h>
using namespace std;
long i,j,n;
set<long long> s;
void gen(long long x,int ch){
    if(x > n || ch > 9) return;
    s.insert(x);
    gen(x * 10 + i,ch + 1);
    gen(x * 10 + j,ch + 1);
}
int main(){
    cin >> n;
    long long x,y,ans = 0;
    for(i = 0;i <= 9;i ++){
        for(j = i + 1;j <= 9;j ++){
            gen(0,0);
        }
    }
    cout << s.size() - 1;

    return 0;
}