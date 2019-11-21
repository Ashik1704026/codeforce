#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y,p=0,ans=0;
    string str;
    cin>>n>>x>>y;
    cin>>str;
    str="1"+str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1' && str[i+1]=='0')
            p++;
    }
    if(p==0)
    {
        cout<<"0";
        return 0;
    }
    ans=((p-1)*min(x,y))+y;
    cout<<ans;
    return 0;
}