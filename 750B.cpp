#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long curdis=0;
    while (n--)
    {
        long dis;
        string direction;
        cin>>dis>>direction;
        if((direction[0]!='S' && curdis==0) || (direction[0]!='N' && curdis==20000)){
            cout<<"N0\n";
            return 0;
        }
        if(direction[0]=='N') curdis-=dis;
        if(direction[0]=='S') curdis+=dis;
        if(curdis<0 || curdis>20000){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}