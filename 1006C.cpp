#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long ar[n+10];
    for(int i=1;i<=n;i++) cin>>ar[i];
    long long presum=0,postsum=0;
    int i=0,j=n+1,index;
    while (i<j)
    {
        if(presum<postsum) presum+=ar[++i];
        else if (presum>postsum) postsum+=ar[--j];
        else{
            index=i;
            presum+=ar[++i];
            postsum+=ar[--j];
        }
    }
    cout<<accumulate(ar+1,ar+index+1,0LL);
    


    return 0;
}