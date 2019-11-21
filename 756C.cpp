#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,ans = 0; cin>>n;
    set<int> b;
    for(int i = 1;i <=n;i++){
        cin>>x;
        if(x==i) ans++;
        else b.insert(x);
    }
    cout<<ans+(b.size()/2);
}