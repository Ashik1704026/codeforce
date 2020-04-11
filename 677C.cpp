#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    map<int,char>m;
    int ar[400];
    int x=0;
    long long ans = 1;
    for(char i = '0';i <= '9';i ++)
        m[x++] = i;
    for(char i = 'A';i <= 'Z';i ++)
        m[x++] = i;
    for(char i = 'a';i <= 'z';i ++)
        m[x++] = i;
    m[x++] = '-';
    m[x++] = '_';
    for(int i = 0;i < 64;i ++)
        ar[m[i]] = i;
    for(int i = 0;i < str.size();i ++){
        x = ar[str[i]];
        for(int j = 0;j < 6;j ++){
            if(!(x & (1 << j))){
                ans = (ans * 3) % 1000000007;
            }
        }
    }
    cout << ans;


    return 0;
}