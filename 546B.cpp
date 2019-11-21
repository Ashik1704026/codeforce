#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            if(ar[i]==ar[j+1])
            {
                ar[j+1]+=1;
                cnt++;
            }
        }
    }
    cout<<cnt;

    return 0;
}