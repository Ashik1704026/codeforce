#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,d;
    cin>>n>>m>>d;
    int ar[n*m];
    for(int i=0;i<n*m;i++){
        cin>>ar[i];
    }
    for(int i=1;i<n*m;i++)
        if(ar[i]%d != ar[i-1]%d){
            cout<<"-1";
            return 0;
        }
    sort(ar,ar+(n*m));
    int med=(n*m)/2,sum=0;
    for(int i=0;i<n*m;i++) sum+=(abs(ar[med]-ar[i])/d);
    cout<<sum;

    return 0;
}