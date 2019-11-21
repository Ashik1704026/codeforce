#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a,gc;
    cin>>gc;
    for(int i=1;i<n;i++){
        cin>>a;
        gc=__gcd(gc,a);
    }
    long cnt=0,sqt;
    sqt=sqrt(gc);
    for(int i=1;i<=sqt;i++){
        if(gc/i==i && gc%i==0) cnt++;
        else if(gc%i==0) cnt+=2;
    }
    cout<<cnt;
    return 0;
}