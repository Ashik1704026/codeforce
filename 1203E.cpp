#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n,greater<int>());
    ar[0]+=1;
    for(int i=1;i<n-1;i++)
    {
        if(ar[i]+1<ar[i-1])
        {
            ar[i]+=1;
        }   
    }
    if(ar[n-1]!=1)
        ar[n-1]-=1;
    for(int i=n-2;i>0;i--)
    {
        if(ar[i]>ar[i+1]+1)
            ar[i]-=1;
    }
    int ans=1;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]!=ar[i+1])
            ans+=1;
    }
    cout<<ans;
    



    return 0;
}