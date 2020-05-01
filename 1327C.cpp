#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin >> n >> m >>  k;
    for(int i = 0 ;i < 2 * k; i++){
        int a,b;
        cin >> a >> b;
    }
    vector<string> str(2 * n * m);
    for(int i = 0;i < n - 1;i ++)
        str[i] = 'U';
    for(int i = n - 1;i < n + m - 2;i ++)
        str[i] = 'L';
    int x = n + m -2;
    for(int i = 0;i < m - 1;i ++)
        str[x ++] = 'R';
    for(int i = 0;i < n - 1;i ++){
        str[x ++] = 'D';
        for(int j = 0;j < m - 1;j ++){
            if(i % 2)
                str[x ++] = 'R';
            else
                str[x ++] = 'L';
        }
    }
    cout << x << "\n";
    for(int i = 0;i < x;i ++)
        cout << str[i];
    

    return 0;
}