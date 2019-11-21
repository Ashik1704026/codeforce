#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int x=0;x<t;x++){
        int n,m,k;
        cin>>n>>m>>k;
        int first;
        cin>>first;
        for(int i=1;i<n;i++){
            int second;
            cin>>second;
            if(m>=0){
                if(first>=second) m=m+abs(first-second)+min(second,k);
                else if(first<second) m=m+min(first,first-second+k);
                first=second;
            }
        }
        (m<0)?cout<<"NO\n":cout<<"YES\n";
    }
}