#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string str1,str2;
	cin>>str1>>str2;
	if((str1[0]=='>'&&str2[0]=='v') || (str1[0]=='<'&&str2[m-1]=='v') || (str1[n-1]=='>'&&str2[0]=='^') || (str1[n-1]=='<'&&str2[m-1]=='^'))
		cout<<"NO\n";
	else
		cout<<"YES\n";



	return 0;
}