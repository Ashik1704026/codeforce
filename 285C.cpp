#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    long long int ans=0;
    for(int i=1;i<=n;i++)
        ans+=abs(ar[i-1]-i);
    cout<<ans;




    return 0;
}