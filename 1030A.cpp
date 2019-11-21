#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		if(a)
			c=1;
	}
	if(c)
		cout<<"HARD\n";
	else
		cout<<"EASY\n";


	return 0;
}