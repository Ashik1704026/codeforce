#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    string str;
    cin >> str;
    int grp = 0,num = 0;
    map<int,int>ok;
    for(int i = 0;i < n;i ++){
        if(str[i] == '.'){
            grp ++;
            if(i == 0 || str[i -1] != '.')
                num ++;
            ok[i + 1] = 1;
        }
    }
    while(m --){
        int x;
        char c;
        scanf("%d %c",&x,&c);
        int a,b;
        a = ok[x],b = c == '.';
        if(a != b){
            if(a)
                grp --;
            else
                grp ++;
            if(ok[x - 1] && ok[x + 1] && !b)
                num ++;
            if(!ok[x - 1] && !ok[x + 1] && !b)
                num --;
            if(ok[x - 1] && ok[x + 1] && b)
                num --;
            if(!ok[x - 1] && !ok[x + 1] && b)
                num ++;
        }
        ok[x] = b;
        printf("%d\n",grp - num);
    }


    return 0;
}