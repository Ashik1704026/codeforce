/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string str;
	cin>>n;
	cin>>str;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(str[i]=='-' && ans>0)
			ans--;
		else if(str[i]=='+')
			ans++;
	}
	cout<<ans;



	return 0;
}*/



/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,ans=0;
	cin>>n>>x>>y;
	string str;
	cin>>str;
	for(int i=n-x;i<n;i++)
	{
		if(i==(n-y-1) && str[i]=='0')
		{
			//cout<<str[i]<<" "<<i<<" ";
			ans+=1;
		}
		else if(str[i]=='1' && i!=n-y-1)
		{
			//cout<<str[i]<<" "<<i<<" ";
			ans+=1; 
		}


	}
	cout<<ans;



	return 0;
}*/



/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0,j=1;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	for(int i=0;i<n;i++)
	{
		if(ar[i]>=j)
		{
			ans+=1;
			j+=1;
		}
	}
	cout<<ans;


	return 0;
}*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0;
	string str;
	cin>>n>>str;
	for(int i=0;i<str.size()-1;i+=2)
	{
		while(str[i]==str[i+1])
		{
			str.erase(str.begin()+i+1);
			s++;
		}
	}
	if((n-s)%2)
	{
		cout<<s+1<<endl;
		for(int i=0;i<str.size()-1;i++)
			cout<<str[i];
	}
	else
	{
		cout<<s<<endl;
		for(int i=0;i<str.size();i++)
			cout<<str[i];
	}

	return 0;
}