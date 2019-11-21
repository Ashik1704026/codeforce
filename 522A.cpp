#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=1;
	cin>>n;
	string str1,str2,str3;
	map< string,int >m;
	for(int i=0;i<n;i++)
	{
		cin>>str1>>str2>>str3;
		transform(str1.begin(), str1.end(), str1.begin(), ::tolower); 
		transform(str3.begin(),str3.end(),str3.begin(),::tolower);
		int mx=m[str3]+1;
		if(mx>ans)
			ans=mx;
		m[str1]=mx;
	}
	cout<<ans+1;



	return 0;
}