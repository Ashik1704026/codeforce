#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=max(abs(a-c),abs(b-d));
    cout<<x<<endl;
    while(x--)
    {
    	if(a>c) a--,cout<<"L";
    	if(a<c) c--,cout<<"R";
    	if(b>d) b--,cout<<"D";
    	if(b<d) d--,cout<<"U";
    	cout<<"\n";
    }
    


	return 0;
}