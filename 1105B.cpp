#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,sub[30]={0},t=0,l=0;
	cin>>n>>k;
	string str;
	cin>>str;
	for(int i='a';i<='z';i++,l++)
	{
		for(int j=0;j<n;j++)
		{
			if(str[j]==i)
			{
				t+=1;
				if(t>=k)
				{
					sub[l]+=(t/k);
					t=0;
				}
			}
			else
				t=0;
			
		}
	}
	sort(sub,sub+27,greater<int>());
	cout<<sub[0];


	return 0;
}