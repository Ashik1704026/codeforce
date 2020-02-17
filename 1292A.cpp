// #include<iostream>
// using namespace std;
// int n,q,a[2][100003],f,b,x,y;
// int main(){
//     for(cin>>n>>q;q--;){
//         cin>>x>>y;
//         b =a[x-1][y-1]?-1:1;
//         f += b*(a[2-x][y-2]+a[2-x][y-1]+a[2-x][y]);
//         a[x-1][y-1]^=1;
//         cout<<f<<" ";
//         puts(f?"nO":"yEs");
//     }
// }



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