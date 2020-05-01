#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        int x = n / 2;
        if(x % 2){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            long long s1 = 0,cnt = -1;
            for(long i = 2;i <= n;i += 2){
                printf("%ld ",i);
                s1 += i;
                cnt ++;
            }
            for(long i = 1;cnt --;i += 2){
                printf("%ld ", i);
                s1 -= i;
            }
            cout << s1 << "\n";
        }


    }



    return 0;
}