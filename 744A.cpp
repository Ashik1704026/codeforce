#include <bits/stdc++.h>
using namespace std;
map<int,int>home;
int chck(int x)
{
	if(home[x])
		return false;
	else
	{
		home[x]=1;
		return true;
	}
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int ar[k];
	for(int i=0;i<(k-(k%2));i+=2)
	{
		int a,b;
		cin>>a>>b;
		if(chck(a))
		{
			
		}
	}




	return 0;
}