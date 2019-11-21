#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,x,y,x1,y1;
    long long xx1,yy1;
    cin>>r>>x>>y>>x1>>y1;
    xx1=pow((x1-x),2);
    yy1=pow((y1-y),2);
    double d=sqrt((xx1*1.0)+(yy1*1.0));
    cout<<ceil(d/(2*r*1.0));


    return 0;
}