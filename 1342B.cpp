#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        string str;
        cin >> str;
        int one = 0,zero = 0;
        for(int i = 0;i < str.size();i ++){
            if(str[i] == '1')
                one ++;
            else
                zero ++;
        }
        int sz = str.size();
        string sol = "";
        if(one && zero){
            if(str[0] == '1'){
                for(int i = 0;i < 2 * sz;i ++){
                    if(i % 2 == 0)
                        cout << '1';
                    else
                        cout << '0';
                }
            }
            else{
                for(int i = 0;i < 2 * sz;i ++){
                    if(i % 2)
                        cout << '1';
                    else
                        cout << '0';
                }
            }
            cout << "\n";
        }
        else
            cout << str <<"\n";

    }


    return 0;
}