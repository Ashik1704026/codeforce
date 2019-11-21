#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j;
	cin>>n>>k;
	string sr[1000];
	for(i=1;i<=n;i++)
	{
		sr[i]="Aashik";
		sr[i][0]+=i/26;
		sr[i][1]+=i%26;
	}
	for(i=1;i<=n-k+1;i++)
	{
		string j;
		cin>>j;
		if(j[0]=='N')
			sr[i+k-1]=sr[i];
	}
	for(i=1;i<=n;i++)
		cout<<sr[i]<<" ";





	return 0;
}