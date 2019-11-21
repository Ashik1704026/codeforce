#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		long int l1,l2,r1,r2,a,b;
		cin>>l1>>r1>>l2>>r2;
		a=ceil((l1+r1)/2.0);
		b=floor((l2+r2)/2.0);
		if(a==b)
		{
			a=a-1;
		}
		cout<<a<<" "<<b<<endl;
	}


	return 0;
}