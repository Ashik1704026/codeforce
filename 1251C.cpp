#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str,result= "";
        cin>>str;
        int even[500000],odd[500000];
        int e1=0,o1=0;
        for(int i = 0;i < str.size();i++){
            int a=str[i]-'0';
            if(a%2==0)
                even[e1++]=a;
            else
                odd[o1++]=a;
        }
        int x=0,y=0;
        while(x<e1 || y<o1){
            if(x==e1){
                result+=odd[y]+'0';
                y++;
                continue;
            }
            if(y==o1){
                result+=even[x]+'0';
                x++;
                continue;
            }
            if(even[x] < odd[y]){
                result+=even[x]+'0';
                x++;
            }
            else{
                result+=odd[y]+'0';
                y++;
            }
        }
        cout<<result<<"\n";
    }

   return 0;
}