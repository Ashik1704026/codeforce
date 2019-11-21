#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j=0,ar[30]={0},k=0;
	cin>>n;
	char str[1010];
	cin>>str;
	for(i=0;i<n-1;i++)
	{
		if(str[i]!=str[i+1])
		{
			cout<<"YES\n"<<str[i]<<str[i+1]<<endl;
			return 0;
		}
	}
	cout<<"NO\n";



	return 0;
} 