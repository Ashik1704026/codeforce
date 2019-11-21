#include<bits/stdc++.h>
using namespace std;
int main()
{
	map< long double,long int >m;
	int n;
	cin>>n;
	long ar[n+10],br[n+10],ans=0,mx=0;
	for(long i=0;i<n;i++)
		cin>>ar[i];
	for(long i=0;i<n;i++)
	{
		long b;
		cin>>b;
		if(ar[i]==0&&b==0)
			ans+=1;
		if(ar[i]!=0)
		{
			m[(b*1.0)/ar[i]]++;
			mx=max(mx,m[(b*1.0)/ar[i]]);
		}
	}
	cout<<mx+ans;

	return 0;
}