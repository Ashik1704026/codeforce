#include <bits/stdc++.h>
using namespace std;
int main()
{
 	int a,b,c;
 	cin>>a>>b;
 	c=__builtin_popcount(b^a);
 	cout<<c;



	return 0;
}