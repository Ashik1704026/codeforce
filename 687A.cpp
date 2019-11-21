#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,color[110000];
	memset(color,-1,sizeof(color));
	cin>>n>>m;
	vector<int>v[110000];
	vector<int>x;
	vector<int>y;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	queue<int>q;
	q.push(a);
	color[a]=1;
	x.push_back(a);
	while(!q.empty())
	{
		int k=q.front();
		q.pop();
		int sz=v[k].size();
		for(int i=0;i<sz;i++)
		{
			if(color[v[k][i]]==-1)
			{
				color[v[k][i]]=1-color[k];
				if(color[v[k][i]]==1)
					x.push_back(v[k][i]);
				else if(color[v[k][i]]==0)
					y.push_back(v[k][i]);
				q.push(v[k][i]);
			}
			else if(color[v[k][i]]==color[k])
			{
				cout<<"-1\n";
				return 0;
			}
		}
	}
	cout<<x.size()<<endl;
	for(int i=0;i<x.size();i++)
		cout<<x[i]<<" ";
	cout<<endl;
	cout<<y.size()<<endl;
	for(int i=0;i<y.size();i++)
		cout<<y[i]<<" ";





	return 0;
}
