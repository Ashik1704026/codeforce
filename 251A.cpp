#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<long long> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int j=0,cnt=0;
    long long ans=0;
    for(int i=0;i<n;i++){
        while(v[j]-v[i]<=d && j<n) j++;
        int k=j-i;
        ans+=((k-1)*1ll*(k-2))/2;
    }
    cout<<ans;
    return 0;
}