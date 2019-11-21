#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,x,y,z;
	cin>>a>>b>>c; 
	for(int i=0;i<=10000;i++)
	{
		x=c-(a*i);
		if(x%b==0 && x>=0)
		{
			cout<<"Yes\n";
			return 0;
		}
		if(x<0)
		{
			cout<<"No\n";
			return 0;
		}
	}


	return 0;
}