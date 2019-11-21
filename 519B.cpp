#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a,s1=0,s2=0,s3=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s1+=a;
	}
	for(int i=0;i<n-1;i++)
	{
		cin>>a;
		s2+=a;
	}
	for(int i=0;i<n-2;i++)
	{
		cin>>a;
		s3+=a;
	}
	cout<<s1-s2<<endl<<s2-s3;



	return 0;
}