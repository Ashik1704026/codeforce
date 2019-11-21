#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y,a,b,c,d;
    cin>>n>>x>>y;
    a=n-x;b=n-y;c=x-1;d=y-1;
    if (a+b==c+d)
    	cout<<"White\n";
    else if(a+b>c+d)
    	cout<<"White\n";
    else
    	cout<<"Black\n";
    return 0;
}