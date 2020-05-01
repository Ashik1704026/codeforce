#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string str,sol = "";
    cin >> str;
    int bl = 0;
    for(int i = 0;i < n;i ++){
        if(str[i] == ')')
            bl --;
        sol += '0' + (bl & 1);
        if(str[i] == '(')
            bl ++;
    }
    cout << sol;
    return 0;
}