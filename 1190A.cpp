#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long>v;
    v.push_back(0);
    for(int i=0;i<m;i++){
        long long a;
        cin>>a;
        v.push_back(a);
    }
    int i=1,j=1,ans=0;
    while(i<=m){
        while((v[j]-i+k)/k==(v[i]-i+k)/k)
            j++;
        i=j;
        ans++;
    }
    cout<<ans;

    return 0;
}