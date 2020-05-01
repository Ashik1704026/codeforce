#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    long ar[n][m],br[n][m];
    int x = 0,y = 0;
    vector<long> cr[100000],dr[100000];
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cin >> ar[i][j];
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cin >> br[i][j];
        }
    }
    for (int i = 1; i < n; i++) { 
        for (int j = 1; j < m; j++) { 
  
            // If both are not equal 
            if (ar[i][j] != br[i][j]) { 
  
                // Change the parity of 
                // all corner elements 
                ar[i][j] ^= 1; 
                ar[0][0] ^= 1; 
                ar[0][j] ^= 1; 
                ar[i][0] ^= 1; 
            } 
        } 
    } 
  
    // Check if A is equal to B 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
  
            // Not equal 
            if (ar[i][j] != br[i][j]){
                cout << "No\n";
                return 0;
            } 
        } 
    } 
    cout << "Yes\n";

    return 0;
}
