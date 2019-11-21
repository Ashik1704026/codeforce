#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,g=0,f=0,h=0,flag=0;
    long int s=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=0;i<n;i++)
    {
    	if(ar[i]==25)
    		g++;
    	if(ar[i]==50)
    	{
    		g--;
    		f++;
    	}
    	if(f==0&&ar[i]==100)
    	{
            g-=3;
    	}
    	if(f!=0&&ar[i]==100)
    	{
    		g--;
    		f--;
    	}
    	if(g<0)
    	{
    		cout<<"NO\n";
    		return 0;
    	}
    }
    cout<<"YES\n";

	return 0;
}