#include<iostream>
using namespace std;
int n,q,a[2][100003],f,b,x,y;
int main(){
    for(cin>>n>>q;q--;){
        cin>>x>>y;
        b=a[x-1][y-1]?-1:1;
        f += b*(a[2-x][y-2]+a[2-x][y-1]+a[2-x][y]);
        a[x-1][y-1]^=1;
        puts(f?"nO":"yEs");
    }
}