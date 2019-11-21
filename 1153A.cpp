#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	int ar[n][2];
	vector< pair<int, int> >time;	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i][0];
		cin>>ar[i][1];
		if(ar[i][0]<t)
		{
			int d=ceil((t-ar[i][0])/(ar[i][1]*1.0));
			time.push_back(make_pair((d*ar[i][1])+ar[i][0],i));
		}
		else
			time.push_back(make_pair(ar[i][0],i));
	}
	//for(int i=0;i<n;i++)
	//	cout<<time[i].first<<" ";
	sort(time.begin(),time.end());
	cout<<time[0].second+1;




	return 0;
}