#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,x,y,m,n;
	cin>>a>>b>>c>>d;
	cin>>m>>n;
	x=abs(a-c);
	y=abs(b-d);
	if((x%m==0 && y%n==0) && ((x/m)%2==(y/n)%2))
		cout<<"YES\n";
	else
		cout<<"NO\n";


	return 0;
}