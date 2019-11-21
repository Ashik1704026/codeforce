#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n;
    cin>>n;
    long long sum=0;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(abs(sum+a)<=500)
        {
            cout<<"A";
            sum+=a;
        }
        else
        {
            cout<<"G";
            sum-=b;
        }
        
    }
    
    return 0;
}