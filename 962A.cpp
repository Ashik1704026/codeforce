#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long ar[n+10];
    ar[0]=0;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        ar[i]+=ar[i-1];
    }
    for(int i=1;i<=n;i++){
        if(ar[i]>=ceil(ar[n]/2.0)){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}