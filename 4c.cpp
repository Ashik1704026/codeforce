#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,j=1;
	cin>>n;
	vector< pair<string,int> >v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first;
		v[i].second=i;
	}
	sort(v.begin(),v.end());
	string ans[n];
	ans[v[0].second]="OK";
	for(int i=1;i<n;i++)
	{
		if(v[i].first==v[i-1].first)
		{
			ans[v[i].second]=v[i].first+to_string(j);
			j++;
		}
		else
		{
			ans[v[i].second]="OK";
			j=1;
		}
	}
	for(int i=0;i<n;i++)
		cout<<ans[i]<<endl;



	return 0;
}