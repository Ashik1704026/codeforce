#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<long ,long> hash;
    long mx=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        hash[a]++;
    }
    for(auto i :hash)
        mx=max(mx,i.second);
    cout<<n-mx;
    
    return 0;
}