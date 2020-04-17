#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        long ar[n];
        for(int i = 0;i < n;i ++)
            cin >> ar[i];
        long d = 0,ans = 0;
        set<long> s;
        for(int i = 0;i < n;i ++){
            if(ar[i] == -1){
                if(i - 1 >= 0 && ar[i-1] != -1)
                    s.insert(ar[i - 1]);
                if(i + 1 < n && ar[i+1] != -1)
                    s.insert(ar[i + 1]);
            }
        }
        if(s.size() == 0)
            cout << "0 0\n";
        else{
            long x = -2,y = 0;
            for(auto z : s){
                if(x == -2){
                    x = z;
                    y = z;
                }
                else
                    y = z;
            }
            long k = (x + y) /2;
            long m = 0;
            for(int i = 0;i < n;i ++){
                if(ar[i] == -1){
                    ar[i] = k;
                }
            }
            for(int i = 1;i < n;i ++){
                m = max(m,abs(ar[i] - ar[i-1]));
            }
            cout << m << " " << k << "\n";
        }
    }



    return 0;
}