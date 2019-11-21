#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int u[n+100]={0},v[n+100]={0};
	int a[n+100]={0};
	long l[1100000];
	long long ans=99999999999;
	for(int i=1;i<=m;i++)
		cin>>u[i]>>v[i]>>l[i];
	for(int i=1;i<=k;i++)
	{
		int x;
		cin>>x;
		a[x]=1;
	}
	for(int i=1;i<=m;i++)
	{
		if(a[u[i]]+a[v[i]]==1)
		{
			if(ans>l[i])
				ans=l[i];
		}
	}
	if(ans==99999999999)
	    cout<<"-1";
	else
	    cout<<ans;

	return 0;
}