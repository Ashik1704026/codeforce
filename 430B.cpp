#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x,ans=0,a=0;
    cin>>n>>k>>x;
    vector<int>v;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        v.push_back(b);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==x) a++;
        else a=0;
        if(a>=2){
            v.erase(v.begin()+i-1);
            v.erase(v.begin()+i-1);
            ans+=2;
            i-=2;
            a=0;
        }
    }
    a=1;
    for(int i=1;i<v.size();i++){
        //cout<<v[i];
        if(v[i]==v[i-1]) a++;
        else{
            if(a>=3){
                ans+=a;
                a=1;
            }
            else a=1;
        }
    }
    if(a>=3) ans+=a;
    cout<<ans;


    return 0;
}