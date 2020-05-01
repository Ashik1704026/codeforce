#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q --){
        int n;
        cin >> n;
        int ar[n + 10];
        set<int> s;
        for(int i = 0;i < n;i ++){
            cin >> ar[i];
            s.insert(ar[i]);
        }
        int flag = 0;
        if(s.size() > 1 && n % 2 ==0){
            cout << "2\n";
            for(int i = 0;i < n;i ++){
                if(i % 2)
                    cout << "2 ";
                else
                    cout << "1 ";
            }
            cout << "\n";
        }
        else if(s.size() == 1){
            cout << "1\n";
            for(int i = 0;i < n;i ++)
                cout << "1 ";
            cout << "\n";
        }
        else{
            if(ar[ n - 1] == ar[0]){
                cout << "2\n";
                for(int i = 0;i < n - 1;i ++)
                    if(i % 2)
                        cout << "2 ";
                    else
                        cout << "1 ";
                cout << "1\n";
            }
            else{
                for(int i = 1;i < n; i++){
                    if(ar[i] == ar[i - 1]){
                        flag = i;
                    }
                }
                if(flag){
                    cout << "2\n";
                    int x = 2;
                    for(int i = 0;i < n;i ++){
                        if(i == flag)
                            cout << x << " ";
                        else{
                            (x >= 2) ? -- x : ++ x;
                            cout << x << " ";
                        }
                    }
                }
                else{
                    cout << "3\n";
                        for(int i = 0;i < n - 1;i ++)
                            if(i % 2)
                                cout << "2 ";
                            else
                                cout << "1 "; 
                    cout << "3";
                }
                cout << "\n";
            }   
        }
        
    }


    return 0;
}