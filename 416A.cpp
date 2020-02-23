#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long mx=2000000000,mn=-2000000000;
    while(n!=0){
        string str,yn;
        long x;
        cin>>str>>x>>yn;
        if(yn=="N"){
            if(str==">=") str="<";
            else if(str=="<") str=">=";
            else if(str=="<=") str=">";
            else str="<=";
        }
        if(str==">") mn=max(mn,x+1);
        else if(str==">=") mn=max(mn,x);
        else if(str=="<") mx=min(mx,x-1);
        else mx=min(mx,x);
        n--;
    }
    if(mn<=mx) cout<<mn;
    else cout<<"Impossible\n";


    return 0;
}