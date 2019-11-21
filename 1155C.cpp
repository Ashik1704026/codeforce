#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,a;
	cin>>n>>m;
	long long arn[n],arm[m];
	cin>>a;
	arn[0]=a;
	for(int i=1;i<n;i++)
	{
		long long b;
		cin>>arn[i];
		b=arn[i];
		arn[i]=arn[i]-a;
		a=b;
	}
	for(int i=0;i<m;i++)
		cin>>arm[i];
	long long x=arn[1];
	//cout<<x<<endl;
	for(int i=2;i<n;i++)
	{
		x=__gcd(x,arn[i]);
		//cout<<x<<endl;
	}
	for(int i=0;i<m;i++)
	{
		if(x%arm[i]==0)
		{
			//cout<<x<<" "<<i;
			cout<<"YES\n";
			cout<<arn[0]<<" "<<i+1;
			return 0;
		}
	}
	cout<<"NO\n";

	return 0;
}