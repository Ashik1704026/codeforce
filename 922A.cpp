#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,y;
    cin>>x>>y;
    if(x==0 && y==1) cout<<"Yes\n";
    else if(x-y+1>=0 && (x-y+1)%2==0 && y>1) cout<<"Yes";
    else cout<<"No\n";

    return 0;
}