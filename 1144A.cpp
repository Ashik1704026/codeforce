/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=1;
	cin>>n;
	while(n--)
	{
		a=1;
		string str;
		cin>>str;
		int sz,b,e;
		sz=str.size();
		sort(str.begin(),str.end());
		char ch=str[0];
		for(int i=0;i<sz-1;i++,ch++)
		{
			if(char (str[i+1])!=ch+1)
			{
				a=0;
				cout<<"No\n";
				break;
			}
		}
		if(a)
			cout<<"Yes\n";


	}


	return 0;
}*/




/*#include <bits/stdc++.h>
using namespace std;
int ar[30];
int lmx=0,rmx=0;
int lthanos(int i, int n)
{
	int a=0;
	for(int i=0;i<n-1;i++)
		if(ar[i]>ar[i+1])
			a=1;
	if(a)
		lthanos();
	else
		return n;

}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>ar[i];
	int ans=lthanos(n);
	cout<<ans;

	return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int even[n],odd[n];
	int s1=0,s2=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a%2)
		{
			odd[s1]=a;
			s1++;
		}
		else
		{
			even[s2]=a;
			s2++;
		}
	}
	int sum=0;
	sort(odd,odd+s1,greater<int>());
	sort(even,even+s2,greater<int>());
	if(s1>s2)
	{
		for(int i=s2+1;i<s1;i++)
			sum+=odd[i];
	}
	else
	{
		for(int i=s1+1;i<s2;i++)
			sum+=even[i];
	}
	cout<<sum;



	return 0;
}*/


/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[2*110000]={0};
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		ar[a]++;
	}
	int s1=0;
	for(int i=0;i<2*110000;i++)
	{
		if(ar[i]>2)
		{
			cout<<"NO\n";
			return 0;
		}
		else if(ar[i]==2)
		{
			s1++;
		}
	}

	cout<<"YES\n"<<s1<<"\n";
	for(int i=0;i<2*110000;i++)
		if(ar[i]==2)
		{
			cout<<i<<" ";
			ar[i]--;
		}
	cout<<"\n"<<n-s1<<"\n";
	for(int i=2*110000;i>=0;i--)
		if(ar[i]==1)
			cout<<i<<" ";

	return 0;
}*/




#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long  n,index,value,s=1,mx=0;
	cin>>n;
	long long ar[n+10],br[n+10];
	for(long  i=1;i<=n;i++)
	{
		long a;
		cin>>a;
		ar[i]=a;
		br[i]=a;
	}
	sort(br+1,br+n+1);
	br[n+1]=-1;
	long i;
	for(i=1;i<=n;i++)
	{
		if(br[i]==br[i+1])
			s++;
		else if(s>mx)
		{
			mx=s;
			s=1;
			value=ar[i];
		}
	}
	for(i=1;i<=n;i++)
	{
		if(value==ar[i])
		{
			index=i;
			break;
		}
	}
	cout<<n-mx<<"\n";
	for(i=index+1;i<=n;i++)
	{
		if(ar[i]!=value)cout<<(ar[i]<value?1:2)<<" "<<i<<" "<<i-1<<'\n';
	}
	for(i=index-1;i>0;i--)
	{
		if(ar[i]!=value)cout<<(ar[i]<value?1:2)<<" "<<i<<" "<<i+1<<'\n';	}



	return 0;
}