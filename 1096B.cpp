#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string str;
	cin>>n>>str;
	long long int l=0,r=0;
	for(int i=0;i<n;i++)
	{
		if(str[i]==str[0])
			l++;
		else
			break;
	}
	for(int i=n-1;i>=0;i--)
	{
		if(str[i]==str[n-1])
			r++;
		else
			break;
	}
	if(str[0]==str[n-1])
		cout<<((1+l)*1ll*(r+1))%998244353;
	else
		cout<<(l+r+1)%998244353;



	return 0;
}