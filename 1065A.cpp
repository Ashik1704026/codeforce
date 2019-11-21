#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int s,a,b,c,free,total;
        cin>>s>>a>>b>>c;
        free=b*(s/(a*c));
        total=(s/c)+free;
        cout<<total<<endl;
    }


    return 0;
}
