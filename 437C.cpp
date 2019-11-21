#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int cost[n+100];
	for(int i=1;i<=n;i++)
		cin>>cost[i];
	long long ans=0;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		ans+=min(cost[a],cost[b]);
	}
	cout<<ans;


	return 0;	
}