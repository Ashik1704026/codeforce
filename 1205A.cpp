#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"NO\n";
        return 0;
    }   
    else
    {
        cout<<"YES\n";
        for(int i=1;i<=n;i++)
        {
            if(i%2)
            {
                cout<<2*i-1<<" ";
            }
            else
            {
                cout<<2*i<<" ";
            }
            
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2)
            {
                cout<<2*i<<" ";
            }
            else
            {
                cout<<2*i-1<<" ";
            }
            
        }
    }
    


    return 0;
}