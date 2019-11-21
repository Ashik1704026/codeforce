#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,diff,cnt=0;
	cin>>n>>k;
	diff=n-k;
	if(n==k)
		{
			cout<<"-1\n";
			return 0;
		}
	else if(k==n-1)
	{
		for(int i=1;i<=n;i++)
			cout<<i<<" ";
	}
	else
	{
		int i=2;
		while(diff!=1)
		{
			cout<<i<<" ";
			i++;
			diff--;
		}
		cout<<"1 ";
		for(int j=n-k+1;j<=n;j++)
			cout<<j<<" ";
	}


	return 0;
}