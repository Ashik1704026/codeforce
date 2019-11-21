#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int i,j;
		cin>>n;
		string str;
		cin>>str;
		for(i=0;i<n;i++)
		{
			if(str[i]=='>')
				break;
		}
		for(j=n-1;i>=0;j--)
			if(str[j]=='<')
				break;
		j=n-1-j;
		(i<=j)?(cout<<i<<"\n"):(cout<<j<<"\n");
	}


	return 0;
}