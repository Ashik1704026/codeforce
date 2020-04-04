#include<bits/stdc++.h>
using namespace std;
map<long long,long long>m;
int main(){
    int n,first=-1,second=-1;
    cin>>n;
    for(int i = 0;i < n;i++){
        long long a;
        cin>>a;
        cout<<m[a]<<" "<<a<<"\n";
        if(first == -1 && m[a] == a) first=i;
        else if(m[a] == a) second=i;
        m[a]=a;
    }
    cout<<first<<second;

   return 0;
}