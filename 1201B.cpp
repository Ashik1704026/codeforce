#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum=0,big=0;
    for(int i=0;i<n;i++)
    {
        long a;
        cin>>a;
        sum+=a;
        if(a>big)
            big=a;
    }
    if(sum%2==0 && big<=(sum-big))
        cout<<"YES\n";
    else
    {
        cout<<"NO\n";
    }
    


    return 0;
}