#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long sum=0,a,b,x,y,zero=0;
	cin>>n;
	cin>>x>>y;
	sum=min(x,y)-0+1;
	n--;
	while(n--)
	{
		cin>>a>>b;
		if(x==a&&y==b)
		{
			x=a;
			y=b;
		}
		else
		{
			sum+=max(zero,min(a,b)-max(x,y)+(x!=y));
			x=a;
			y=b;
		}
	}
	cout<<sum;


	return 0;
}
