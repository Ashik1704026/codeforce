#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x=0,y=0;
	cin>>n>>m;
	int b,g;
	cin>>b;
	int boy[n]={0},girl[m]={0};
	for(int i=0;i<b;i++)
	{
		int a;
		cin>>a;
		boy[a]=1;
		//cout<<a<<" "<<boy[a]<<"\n";
	}
	cin>>g;
	for(int i=0;i<g;i++)
	{
		int a;
		cin>>a;
		girl[a]=1;
	}
	int z=1000000;
	while(z--)
	{
		if(boy[x]==1||girl[y]==1)
		{
			boy[x]=1;
			girl[y]=1;
		}
		x++;
		y++;
		if(x==n)
			x=0;
		if(y==m)
			y=0;
	}
	/*for(int i=0;i<n;i++)
		cout<<boy[i]<<" ";
	cout<<endl;
	for(int i=0;i<m;i++)
		cout<<girl[i]<<" ";*/
	for(int i=0;i<n;i++)
	{
		if(boy[i]==0)
		{
			//cout<<boy[i]<<" "<<i<<"b "<<"No\n";
			cout<<"No\n";
			return 0;
		}
	}
	for(int i=0;i<m;i++)
	{
		if(girl[i]==0)
		{
			//cout<<girl[i]<<" "<<i<<"g ";
			cout<<"No\n";
			return 0;
		}
	}
	cout<<"Yes\n";


	return 0;
}