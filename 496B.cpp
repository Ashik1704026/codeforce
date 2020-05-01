#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    string tot,sol = str;
    for(int i = 0;i < 10;i ++){
        for(int j = 0;j < n;j ++)
            str[j] = (str[j] - '0' + 1) % 10 + '0';
        tot = str + str;
        for(int j = 0;j < n;j ++)
            sol = min (sol,tot.substr(j,n));
    }
    cout << sol;


    return 0;
}