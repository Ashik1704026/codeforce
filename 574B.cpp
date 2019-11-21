#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int mn=100000005;
	int  graph[5005][5005];
	int degree[5005];
	memset(graph,0,sizeof(graph));
	memset(degree,0,sizeof(degree));
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u][v]=1;
		graph[v][u]=1;
		degree[u]++;
		degree[v]++;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
			if(graph[i][j])
			{
				for(int k=j+1;k<=n;k++)
				{
					if(graph[i][k] && graph[j][k])
						mn=min(mn,degree[i]+degree[j]+degree[k]);
				}
			}
	}
	if(mn==100000005)
		cout<<"-1";
	else
		cout<<mn-6;




	return 0;
}