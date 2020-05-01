#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int n,k;
vector<int>v[100000];
int inf = 99999,flag = 0;
map<int,int> chck[2005],ans;
void dfs(int x){
    if(x == n){
        if(k == 0){
            for(int i = 0;i < n;i ++)
                cout << ans[i];
            flag = 1;
        }
        return;
    }
    for(int i = 9;i >= 0;i --){
        int t = v[x][i];
        if(t != inf && chck[x][k - t] == 0 && (k - t) >= 0){
            chck[x][k - t] = 1;
            ans[x] = i;
            k -= t;
            dfs(x + 1);
            if(flag)
                return;
            k += t;
        }
    }
}
int main(){
    fast;
    cin >> n >> k;
    string val[10];
    val[0] = "1110111",val[1] = "0010010",val[2] = "1011101",val[3] = "1011011",val[4] = "0111010";
    val[5] = "1101011",val[6] = "1101111",val[7] = "1010010",val[8] = "1111111",val[9] = "1111011";
    int x = 0;
    for(int i = 0;i < n;i ++){
        string str;
        cin >> str;
        for(int k = 0;k < 10;k ++){
            for(int j = 0;j < 7;j ++){
                if(val[k][j] == '0' && str[j] == '1'){
                    x = inf;
                    break;
                }
                else if(val[k][j] != str[j])
                    x ++;
            }
            v[i].push_back(x);
            x = 0;
        }
    }
    dfs(0);
    if(! flag)
        cout << "-1\n";    

    return 0;
}