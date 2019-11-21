#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,s,a,b,c,d,e,f,x,y,z;
	cin>>m>>s;
	a=s/9;
	b=s%9;
	d=a;
	(b==0)?(c=0):(c=1);
	y=c;
	if(s==0 && m>1)
	{
		cout<<"-1 -1";
		return 0;
	}
	if(a+c>m)
	{
		cout<<"-1 -1";
		return 0;
	}
	if(a+c<m && s>9)
	{
		x=m-a-1-y;
		cout<<"1";
		while(x--)
			cout<<"0";
		while(y)
		{
			cout<<b-1<<"9";
			y--;
		}
		x=a-1;
		if(!c)
			cout<<"8";
		while(x--)
			cout<<"9";

		cout<<" ";
		y=c;
		d=a;
		while(d--)
		cout<<"9";
		while(y)
		{
			cout<<b;
			y--;
		}
		d=m-a-c;
		while(d--)
		cout<<"0";
	return 0;
	}
	if(a+c==m && s>9)
	{
		x=c;
		if(x)
			cout<<b;
		x=a;
		while(x--)
			cout<<"9";
		cout<<" ";
		x=a;
		while(x--)
			cout<<"9";
		if(c)
			cout<<b;
		return 0;
	}
	if(s<10&&m>1)
	{
		x=s;
		y=m-2;
		cout<<"1";
		while(y--)
			cout<<"0";
		cout<<s-1;
		cout<<" ";
		cout<<s;
		y=m-1;
		while(y--)
			cout<<"0";
		return 0;
	}
	if(s<10 && m==1)
	{
		cout<<s<<" "<<s;
		return 0;
	}


	return 0;
}