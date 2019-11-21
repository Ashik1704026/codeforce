#include <bits/stdc++.h>
using namespace std;
list<int>adj[120000];
int n;
map<int,int>color;
int main()
{
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}
	for(int i=1;i<=n;i++)
		cin>>color[i];

	//for(int i=1;i<=n;i++)
	//	cout<<color[i]<<" ";

	


	return 0;
}