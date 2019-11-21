#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        map<char,int>s,t,p;
        int flag=0,j=0;
        string ss,tt,pp;
        cin>>ss>>tt>>pp;
        for(int i=0;i<ss.size();i++) s[ss[i]]++;
        for(int i=0;i<tt.size();i++) t[tt[i]]++;
        for(int i=0;i<pp.size();i++) p[pp[i]]++;
        if(ss.size()>tt.size())
            flag=1;
        for(int i=0;i<tt.size()&&j<ss.size();i++){
            if(ss[j]==tt[i]) j++;
        }
        if(j!=ss.size()) flag=1;
        for(int i=0;i<tt.size();i++){
            if(t[tt[i]]<s[tt[i]]){
                flag=1;
                break;
            }
            if(t[tt[i]]>s[tt[i]]+p[tt[i]]){
                flag=1;
                break;
            }
        }
        (flag==1)?cout<<"no\n":cout<<"yes\n";
    }


    return 0;
}