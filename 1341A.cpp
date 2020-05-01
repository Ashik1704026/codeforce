#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int flag = 0;
        double lw = ((c - d) * 1.0) / (n * 1.0);
        double hg = ((c + d) * 1.0) / (n * 1.0);
        if(lw > a + b){
            cout << "No\n";
        } 
        else if((a - b) * n > c + d){
            cout << "No\n";
        }
        else
            cout << "Yes\n";
    }


    return 0;
}