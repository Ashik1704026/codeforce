#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,i=0,ans=0,x,a;
	vector<pair< long long ,long long> >v;
	queue<long int>q;
	memset(v,0,sizeof(v));
	cin>>n>>k;
	while(n>0)
	{
		if(n%2!=0)
		{
			q.push(1<<i);
			ans+=1;
			v.first++;
		}
		n/=2;
		i++;
	}
	if(ans>k)
	{
		cout<<"NO\n";
		return 0;
	}
	while(ans<k&&!q.empty())
	{
		x=q.front();
		q.pop();
		if(x/2>=1)
		{
			q.push(x/2);
			q.push(x/2);
			ans++;
		}

	}
	if(ans<k)
	{
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";

	for(int i=0;i<k;i++)
	{
		x;
	}


	return 0;

}


