#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,c,t,j=0,ans=0,b=0;
	cin>>n>>t>>c;
	long long seg[n]={0};
	for(int i=0;i<n;i++)
	{
		long long a;
		cin>>a;
		if(a>t)
		{
			seg[j]=b;
			j++;
			b=0;
		}
		else if(a<=t)
			b++;
	}
	seg[j]=b;
	for(int i=0;i<=j;i++)
		if(seg[i]>=c)
			ans+=seg[i]-c+1;
	cout<<ans;


	return 0;
}