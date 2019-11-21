#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n];
    long s=0;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    for(int i=0;i<m;i++)
    {
        if(ar[i]<0)
            s+=-(ar[i]);
    }
    cout<<s;
    


    return 0;
}