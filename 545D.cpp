#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    long ar[n];
    long long s=0;
    for(int i=0;i<n;i++) cin>>ar[i];
    sort(ar,ar+n);
    for(int i=0;i<n;i++){
        if(ar[i]>=s){
            cnt++;
            s+=ar[i];
        }
    }
    cout<<cnt;

    return 0;
}