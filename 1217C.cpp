#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,nk = 0,l = 0,ans = 0;
    cin >> t;
    while(t --){
        string str;
        cin >> str;
        for(int i = 0;i < str.size();i ++){
            if(str[i] == '1'){
                for(int j = i;j < str.size() && j - i <= 17;j ++){
                    nk = nk * 2 + (str[j] == '1');
                    if(nk - (j - i + 1) <= l)
                        ans ++;
                }
                l = 0;
                nk = 0;
            }
            else l ++;
        }
        cout << ans << "\n";
        ans = 0;
        l = 0;
        nk = 0;
    }


    return 0;
}