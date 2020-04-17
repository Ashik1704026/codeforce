#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin >> tst;
    while(tst--){
        int n,a,b;
        cin >>n>>a>>b;
        string c = "",str = "";
        int k = b;
        for(char a = 'a';a <= 'z';a ++)
            c += a;
        for(int i = 0;i < n;i ++){
            str += c[--k];
            if(k == 0)
                k = b;
        } 
        cout << str <<"\n";  
    }



    return 0;
}