#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m;
	cin>>n>>m;
	long long kmax,kmin1,kmin2,kmin3,kmin4;
	kmax=((n-(m-1))*(n-(m-1)-1))/2;
	kmin1=n/m;
	kmin2=n%m;
	kmin3=((kmin1*(kmin1-1))/2)*(m-kmin2);
	kmin4=((kmin1*(kmin1+1))/2)*kmin2;
	cout<<kmin4+kmin3<<" "<<kmax;
	return  0;
}