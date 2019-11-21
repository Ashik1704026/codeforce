#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char str[550][550];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>str[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(str[i][j]=='.')
				str[i][j]='D';
			else if((str[i][j]=='S')&&(str[i-1][j]=='W'||str[i+1][j]=='W'||str[i][j-1]=='W'||str[i][j+1]=='W'))
			{
				cout<<"No\n";
				return 0;
			}
		}
	cout<<"Yes\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<str[i][j];
		cout<<"\n";
	}



	return 0;
}


