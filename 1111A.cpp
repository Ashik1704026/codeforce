#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	int l1,l2,a1=0,a2=0;
	l1=str1.size();
	l2=str2.size();
	if(l1!=l2)
	{
		cout<<"No\n";
		return 0;
	}
	for(int i=0;i<l1;i++)
	{
		if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u') 
		{
			if(!((str2[i]=='a'||str2[i]=='e'||str2[i]=='i'||str2[i]=='o'||str2[i]=='u')))
				{
					cout<<"No\n";
					return 0;
				}

		}
	}
	for(int i=0;i<l1;i++)
	{
		if(str2[i]=='a'||str2[i]=='e'||str2[i]=='i'||str2[i]=='o'||str2[i]=='u') 
		{
			if(!((str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')))
				{
					cout<<"No\n";
					return 0;
				}

		}
	}
	cout<<"Yes\n";
	return 0;
}