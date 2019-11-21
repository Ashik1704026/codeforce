#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	vector< pair<int,int> >v(q);
	int vis[n]={0};
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first;
		cin>>v[i].second;
		for(int j=v[i].first;j<=v[i].second;j++)
			vis[j]=1;
	}
	long sum=0;
	for(int i=0;i<n;i++)
	{
		if(vis[i])
	}



	return 0;
}