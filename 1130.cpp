#include <bits/stdc++.h>
using namespace std;
int X[]={1,-1,0,0};
int Y[]={0,0,1,-1};
#define boundary(p,q) ((p>0&&p<=n)&&(q>0&&q<=n)) 
int n,a1,b1,a2,b2;
int dis,ans=999999;
char ar[100][100];
int visited1[55][55],visited2[55][55];

void dfs2(int a,int b,int x,int y)
{
	visited2[x][y]=1;
	dis=((a-x)*(a-x))+((b-y)*(b-y));
	ans=min(dis,ans);
	for(int i=0;i<4;i++)
		if(boundary(x+X[i],y+Y[i]) && (visited2[x+X[i]][y+Y[i]])==0 && ar[x+X[i]][y+Y[i]]=='0')
		{
			visited2[x+X[i]][y+Y[i]]=1;
			dfs2(a,b,x+X[i],y+Y[i]);
		}
}



void dfs1(int a,int b)
{
	visited1[a][b]=1;
	memset(visited2,0,sizeof(visited2));
	dfs2(a,b,a2,b2);
	for(int i=0;i<4;i++)
		if(boundary(a+X[i],b+Y[i]) && (visited1[a+X[i]][b+Y[i]])==0 && ar[a+X[i]][b+Y[i]]=='0')
		{
			visited1[a+X[i]][b+Y[i]]=1;
			dfs1(a+X[i],b+Y[i]);
		}
}

int main()
{
	cin>>n;
	cin>>a1>>b1>>a2>>b2;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>ar[i][j];
	memset(visited1,0,sizeof(visited1));
	dfs1(a1,b1);

    cout<<ans;


	return 0;
}
