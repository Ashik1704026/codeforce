#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long ans=0,prev=-1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==1){
            if(prev==-1) ans=1;
            else ans*= (i-prev);
            prev=i;
        }
    }
    cout<<ans;
    return 0;
}