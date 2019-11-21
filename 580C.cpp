#include <bits/stdc++.h>
using namespace std;
int n,m,cat[110000];
vector<int>v[110000];
int tc=0,vis[110000]={0},cnt=0;
int tree(int a,int b)
{
	if(cat[a])
	{
		b+=1;
	}
	else 
		b=0;
	if(b>m || vis[a])
		return 0;
	vis[a]=1;
	int sz=v[a].size(),tl=0;
	if(a>1&&sz==1)
		return 1;
	for(int i=0;i<sz;i++)
	{
		tl+=tree(v[a][i],b);
	}
	return tl;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>cat[i];
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	cout<<tree(1,0);


	return 0;
}
