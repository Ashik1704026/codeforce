#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,mx=-1,s=0,c=0,d=0;
	cin>>n;
	int ar[n],br[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		c+=ar[i];
		(ar[i]==0)?(br[i]=1):(br[i]=-1);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			s+=br[j];
			mx=max(mx,s);
		}
		s=0;

	}
		cout<<mx+c;


	return 0;
}