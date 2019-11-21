#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long w1,h1,w2,h2,ans,ex=0;
	cin>>w1>>h1>>w2>>h2;
	(w1>=w2)?ex+=((h2-=1)*w2):ex+=((h1-=1)*w1);
	(w1>=w2)?ex+=(w2+1)*2:ex+=(w1+1)*2;
	(w1>=w2)?ex+=(w1*h1):ex+=(w2*h2);
	ans=((w1+2)*(h1+2))+((w2+2)*(h2+2))-ex;
	cout<<ans;
	return 0;


}