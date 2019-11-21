#include <bits/stdc++.h>
using namespace std;
bool notprime(int n)
{
	if(n%2==0 && n>2)
		return true;
	else if(n%3==0 && n>3)
		return true;
	else
	{
		int sq=sqrt(n);
		for(int i=5;i<=sq;i+=2)
			if(n%i==0)
				return true;
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=1000;i++)
		if(notprime((n*i)+1))
		{
			cout<<i;
			return 0;
		}


	return 0;
}