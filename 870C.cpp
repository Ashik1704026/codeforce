#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		long long n;
		cin>>n;
		if(n>15)
		{
			if((n%4)%2)
				cout<<(n/4)-1<<"\n";
			else
				cout<<n/4<<"\n";
		}
		else if(n==4 || n==6 ||n==9)
			cout<<"1\n";
		else if(n==8 || n==13 || n==10 || n==15)
			cout<<"2\n";
		else if(n==12 || n==14)
			cout<<"3\n";
		else
			cout<<"-1\n";
	}


	return 0;
}