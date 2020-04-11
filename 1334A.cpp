#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n,flag = 1;
        cin >>  n;
        int a = 0,b = 0;
        while(n --){
            int x,y;
            cin >> x >> y;
            if(x < a || y < b || x < y || y - b > x - a)
                flag = 0;
            a = x,b = y;
        }
       
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    }




    return 0;
}