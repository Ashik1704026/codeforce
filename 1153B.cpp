#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int front[m],left[n];
	for(int i=0;i<m;i++)
		cin>>front[i];
	for(int i=0;i<n;i++)
		cin>>left[i];
	int matrix[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>matrix[i][j];
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j])
			{
				cout<<min(left[i],front[j])<<" ";
			}
			else
				cout<<"0 ";
		}
		cout<<endl;
	}



	return 0;
}