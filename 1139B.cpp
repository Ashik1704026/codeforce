#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,mx=0,index,sum=0,z=0;
	cin>>n;
	long long ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sum=ar[n-1];
	for(int i=n-2;i>=0;i--)
	{
		ar[i]=min(ar[i],ar[i+1]-1);
		sum+=max(ar[i],z);
	}
	cout<<sum;



	return 0;
}