#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long a,b,c;
        cin>>a>>b>>c;
        long zero=0;
        long minS=max(zero,(c+b-a+2)/2);
        cout<<max(zero,c-minS+1)<<"\n";
    }
}