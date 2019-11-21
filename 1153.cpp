#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long s=0,s1=0,s2=0;
	cin>>n;
	string str;
	cin>>str;


	for(int i=0;i<n;i++)
	{
		if(str[i]=='(')
			s1+=1;
	}
	if(str[0]!=')' && str[n-1]!='(')
	{
		for(int i=0;(s1<n/2 && i<n);i++)
		{
			if(str[i]=='?')
			{
				str[i]='(';
				s1+=1;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(str[i]=='?')
				str[i]=')';
		}
		int i=0;
		for(i=0;i<n;i++)
		{
			if(str[i]=='(')
				s+=1;
			if(str[i]==')')
				s-=1;
			if(s==0 && i!=n-1)
			{
				cout<<":(\n";
				return 0;
			}
		}
		if(s==0 && i==n)
		{
			cout<<str;
			return 0;
		}
	}
	cout<<":(";




	return 0;
}