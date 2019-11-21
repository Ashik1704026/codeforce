#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n],br[m];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<m;i++)
        cin>>br[i];
    sort(ar,ar+n);
    sort(br,br+m);
    if(2*ar[0]<br[0] && ar[n-1]<br[0])
    {
        if(2*ar[0]<=ar[n-1])
            cout<<ar[n-1];
        else
        {
            cout<<2*ar[0];
        }
        
    }
    else
    {
        cout<<"-1";
    }
    
    

    return 0;
}