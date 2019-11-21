#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    long x=ar[0];
    for(int i=1;i<n;i++) x=__gcd(x,ar[i]);
    while(x%2==0) x/=2;
    while(x%3==0) x/=3;
    for(int i=0;i<n;i++){
        long two=1,three=1;
        while(ar[i]%(two*2)==0) two*=2;
        while(ar[i]%(three*3)==0) three*=3;
        if(two*three*x!=ar[i]){
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
}