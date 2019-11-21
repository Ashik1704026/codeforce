#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int ar[n],s=1,s1=0,i;
    for(i=0;i<n;i++)
    	cin>>ar[i];
    for(i=0;i<n-1;i++)
    {
    	if(ar[i+1]>ar[i])
    	{
    		s+=1;
    	}
    	if(ar[i+1]<=ar[i])
    	{
    		(s1>s)?s1=s1:s1=s;
    		s=1;
    	}
    }
    (s1>s)?s1=s1:s1=s;
    cout<<s1<<endl;




	return 0;
}