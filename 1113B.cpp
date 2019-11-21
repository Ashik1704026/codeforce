#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long ans,sum=0;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		sum+=ar[i];
	}
	ans=sum;
	sort(ar,ar+n);
	int mn=ar[0];
	for(int i=0;i<n;i++)
		for(int d=1;d<=ar[i];d++)
		{
			if(ar[i]%d==0)
			{
				long long x=sum-mn-ar[i];
				x+=(mn*d)+(ar[i]/d);
				ans=min(ans,x);
			}
		}
	cout<<ans<<endl;




	return 0;
}