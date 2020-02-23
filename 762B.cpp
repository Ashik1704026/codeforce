#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int m;
    cin>>m;
    vector<int>usb,ps2;
    for(int i=0;i<m;i++){
        string str;
        long x;
        cin>>x>>str;
        if(str=="USB") usb.push_back(x);
        else ps2.push_back(x);
    }
    sort(usb.begin(),usb.end(),greater<int>());
    sort(ps2.begin(),ps2.end(),greater<int>());
    long long cnt=0,ans=0;
    for(int i=0;i<a && usb.size();i++){
        ans+=usb.back();
        usb.pop_back();
        cnt++;
    }
    for(int i=0;i<b && ps2.size();i++){
        ans+=ps2.back();
        ps2.pop_back();
        cnt++;
    }
    for(int i=0;i<c && (usb.size() || ps2.size());i++){
        if(usb.size()==0){
            ans+=ps2.back();
            ps2.pop_back();
            cnt++;
        }
        else if(ps2.size()==0){
            ans+=usb.back();
            usb.pop_back();
            cnt++;
        }
        else if(usb.back()<=ps2.back()){
            ans+=usb.back();
            usb.pop_back();
            cnt++;
        }
        else{
            ans+=ps2.back();
            ps2.pop_back();
            cnt++;
        }
    }
    cout<<cnt<<" "<<ans;

    return 0;
}