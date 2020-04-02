#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    string str;
    cin>>n>>k>>str;
    int ans=0,temp=0,a=0,b=0;
    for(int i=0;i<n;i++){
        str[i]=='a'?a++:b++;
        if(min(a,b)>k){
            str[temp]=='a'?a--:b--;
            temp++;
        }
        else ans=max(ans,a+b);
    }
    cout<<ans;


    return 0;
}