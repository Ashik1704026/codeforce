#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	double a1,b1;
	a1=(a*1.0)/(b*1.0);
	b1=(c*1.0)/(d*1.0);
	if(a1>b1)
	{
		int x=(a*d)-(b*c);
		int y=__gcd(x,(a*d));
		cout<<x/y<<"/"<<(a*d)/y;
	}
	else if(a1<b1)
	{
		int x=(b*c)-(a*d);
		int y=__gcd(x,(b*c));
		cout<<x/y<<"/"<<(b*c)/y;
	}
	else
		cout<<"0/1";


	return 0;
}