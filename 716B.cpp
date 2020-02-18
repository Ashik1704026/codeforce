#include<bits/stdc++.h>
using namespace std;
map<char,char>m;
int main(){
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<str.size();i++){
        for(int j=i;j<i+26 && j<str.size();j++){
            char s=str[j];
            if(m[s]==0 || s=='?'){
                cnt+=1;
                m[s]=s;
            }
            else if(m[s]!=0){
                cnt=0;
                m.clear();
            }
            if(cnt>=26){
                for(int k=0;k<i;k++){
                    if(str[k]!='?') cout<<str[k];
                    else cout<<"A";
                }
                for(int k=i;k<i+26;k++){
                    if(str[k]!='?') cout<<str[k];
                    else{
                        for(char a='A';a<='Z';a++){
                            if(m[a]==0){
                                cout<<a;
                                m[a]=a;
                                break;
                            }
                        }
                    }
                }
                for(int k=i+26;k<str.size();k++){
                    if(str[k]!='?') cout<<str[k];
                    else cout<<"A";
                }
                return 0;
            }
        }
        cnt=0;
        m.clear();
    }
    cout<<"-1";

    return 0;
}