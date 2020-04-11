#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    string str[n];
    for(int i = 0;i < n;i ++){
        cin >> str[i];
    }
    int st[n][2],l = 0,r = 0;
    memset(st,0,sizeof(st));
    st[0][0] = 0,st[0][1] = 0;
    for(int k = n - 1;k >= 0;k --){
        for(int i = 0,j = m + 1;i < m + 2;i ++,j --){
            if(str[k][i] == '1' && st[k][0] == 0)
                st[k][0] = i;
            if(str[k][j] == '1' && st[k][1] == 0)
                st[k][1] = j;
        }
    }
    int x = 1,mn = st[n-1][1];
    int ans = st[n-1][1];
    for(int i = n - 2;i >= 0;i --){
        if(st[i][0] == 0){
            x ++;
            st[i][0] = st[i+1][0];
            st[i][1] = st[i+1][1];
        }
        else{
            cout << st[i][0] << " " <<st[i][1] << " ";
            int ls = mn + st[i][1] + x;
            int rs = (m + 1 - mn) + (m + 1 - st[i][0]) + x;
            if(ls <= rs){
                ans += ls;
                mn = st[i][1];
            }
            else{
                ans += rs;
                mn = st[i][0];
                cout << "a";
            }
            x = 1;
            cout << mn << " " << ans << "\n";
        } 
    }
    cout << ans;


    return 0;
}