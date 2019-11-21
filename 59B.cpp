#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0,sum=0;
	cin>>n;
	int ar[n]={0};
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a%2==0)
			sum+=a;
		else
		{
			cnt+=1;
			ar[i]=a;
		}
	}
	sort(ar,ar+n,greater<int>());
	if(ar[0]==0)
		cout<<"0\n";
	else if(cnt%2)
	{
		for(int i=0;i<cnt;i++)
			sum+=ar[i];
		cout<<sum<<endl;
	}
	else
	{
		for(int i=0;i<cnt-1;i++)
			sum+=ar[i];
		cout<<sum<<endl;
	}


	return 0;
}