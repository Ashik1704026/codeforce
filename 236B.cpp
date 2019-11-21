#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,divisor[1200000]={0};
	long long sum=0;
	cin>>a>>b>>c;
	for(int i=1;i<=1000000;i++)
		for(int j=i;j<=1000000;j+=i)
			divisor[j]+=1;

	for(int i=1;i<=a;i++)
		for(int j=1;j<=b;j++)
			for(int k=1;k<=c;k++)
				sum+=(divisor[i*j*k] %1073741824 );
	cout<<sum<<endl;


	return 0;
}