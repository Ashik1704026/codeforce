#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,j=0,t,ans=1;
	cin>>n>>k;
	int ar[n];
	while(n%2==0)
	{
		ar[j]=2;
		j++;
		n/=2;
	}
	t=sqrt(n);
	for(int i=3;i<=t;i+=2)
	{
		while(n%i==0)
		{
			ar[j]=i;
			n/=i;
			j++;
		}
	}
	if(n>2)
	{
		ar[j]=n;
		j++;
	}
	//cout<<j<<"\n";
	if(j<k)
	{
		cout<<"-1";
		return 0;
	}
	for(int i=0;i<k-1;i++)
		cout<<ar[i]<<" ";
	for(int i=k-1;i<j;i++)
		ans*=ar[i];
	cout<<ans<<"\n";
	//for(int i=0;i<j;i++)
		//cout<<ar[i]<<" ";



	return 0;
}