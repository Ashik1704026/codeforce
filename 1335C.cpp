#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin >> tst;
    while(tst --){
        int n;
        cin >> n;
        int a[n],b[200050],c[n];
        int s = 0,d = 0;
        memset(b,0,sizeof(b));
        for(int i = 0;i < n;i ++){
            cin >> a[i];
            b[a[i]] ++;

        }
        int k = 0;
        for(int i = 1;i < 200050;i ++){
            if(b[i] > 1){
                c[k ++] = b[i];
            }
            if(b[i] == 1)
                d ++;
                
        }
        if(k){
            sort(c,c+k,greater<int>());
            s = c[0];
            d = d + k - 1;
        }
        if((s - d) > 1){
            cout << min(s,d) + 1 << "\n";
        }
        else if(s && d)
            cout << min(s,d) << "\n";
        else if(s > 1 || d > 1)
            cout << "1\n";
        else 
            cout << "0\n";
    }



    return 0;
}
