#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int ar[n+10]={0};
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		ar[a]=1;
		ar[b]=1;
	}
	int i,j;
	for(i=1;i<=n;i++)
		if(ar[i]==0)
			break;
	cout<<n-1<<endl;
	(i==1)?(j=2):(j=1);
	for(;j<=n;j++)
	{
		if(j!=i)
			cout<<i<<" "<<j<<endl;
	}




	return 0;
}