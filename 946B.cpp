#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	cin>>a>>b;
	while(1)
	{
		if((a==0 || b==0 ))
			break;
		if((a<2*b) && (b<2*a))
			break;
		if(a>=2*b)
			a=a%(2*b);
		else if(b>=2*a)
			b=b%(2*a);
	}
	cout<<a<<" "<<b;



	return 0;
}