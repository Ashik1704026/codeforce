#include<bits/stdc++.h>
using namespace std;
vector<long long int> avengers;
int n,k,a,b;
long long rcrsn(long long int l, long long int r)
{
	long long i=lower_bound(avengers.begin(),avengers.end(),l)-avengers.begin();
	long long j=upper_bound(avengers.begin(),avengers.end(),r)-avengers.begin(); 
	long long int x=j-i;
	long long int power1;
	if(x==0)
		power1=a;
	else
	{
		power1=b*x*(r-l+1);
	}
	if(x==0||l==r)
		return power1;

	long long int mid=(l+r)/2;

	long long int minpower=min(power1,(rcrsn(l,mid)+rcrsn(mid+1,r)));
	return minpower;
}




int main()
{
	cin>>n>>k>>a>>b;
	for(int i=0;i<k;i++)
	{
		int av;
		cin>>av;
		avengers.push_back(av);
	}
	sort(avengers.begin(),avengers.end());
    long long final=(long long)1<<n;
    cout<<rcrsn(1,final);
    


	return 0;
}
