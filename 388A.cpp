#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end(),greater<int>());
    while(v.size()!=0){
        if(v[0]>v[1])
            v.erase(v.begin());
        else if(v[0]==v[1]){
            int sz=v.size()-2;
            if(v[1]>=sz) v.erase(v.begin())
            else{
                ans++;
            }
        }
    }


    return 0;
}