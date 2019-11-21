#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	cin>>a>>b;
	long long x1=0,x2=0,y1=0,y2=0,z1=0,z2=0,ans=0;
	while(a%2==0)
	{
		x1++;
		a/=2;
	}
	while(a%3==0)
	{
		y1++;
		a/=3;
	}
	while(a%5==0)
	{
		z1++;
		a/=5;
	}
	while(b%2==0)
	{
		x2++;
		b/=2;
	}
	while(b%3==0)
	{
		y2++;
		b/=3;
	}
	while(b%5==0)
	{
		z2++;
		b/=5;
	}
	if(a!=b)
	{
		cout<<"-1";
		return 0;
	}
	ans=abs(x1-x2)+abs(y1-y2)+abs(z1-z2);
	cout<<ans;




	return 0;
}