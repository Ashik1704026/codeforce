#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,sr;
	cin>>s;
	int i,t=0;
	int l=s.size();
	for(i=0;i<l;i++)
	{
		if(s[i]=='0'||s[i]=='2')
			sr+=s[i];
		else
			t++;
	}
	int j=0;
	while(sr[j]=='0')
	{
		cout<<"0";j++;
	}
	while(t--)
		cout<<"1";

	cout<<&sr[j];
	


	return 0;
}