#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,simi=1,t;
	cin>>n;
	int ar[n],index[n]={0};
	cin>>ar[0];
	t=ar[0];
	index[ar[0]]+=1;
	for(int i=1;i<n;i++)
	{	
		cin>>ar[i];
		index[ar[i]]+=1;
	}
	sort(index,index+n,greater<int>());
	for(int i=1;i<n;i++)
	{
		if(t!=ar[i]&&t!=index[0])
		{
			simi+=1;
			t=ar[i];
		}
	}
	cout<<simi-index[0];



	return 0;
}