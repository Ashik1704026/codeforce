
#include<bits/stdc++.h>
using namespace std;
int gird[10][120000];
int main(){
    int n,q,a,b=0,c;
    cin>>n>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        a = (gird[x][y] ? - 1 : 1);
        b += a * (gird[3-x][y-1] + gird[3-x][y] + gird[3-x][y+1]);
        gird[x][y] ^= 1;
        if(b) cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}