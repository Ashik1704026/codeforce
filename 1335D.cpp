#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        string str[15];
        for(int i = 1;i <= 9;i ++)
            cin >> str[i];
        for(int i = 1;i <= 9;i ++){
            for(int j = 0;j < 9;j ++){
                if(str[i][j] == '3')
                    str[i][j] = '4';
            }
        }
        

        for(int i = 1;i <= 9;i ++)
            cout << str[i] << "\n";

        }



    return 0;
 }