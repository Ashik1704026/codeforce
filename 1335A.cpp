// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tst;
//     cin >> tst;
//     while(tst --){
//         long n;
//         cin >> n;
//         if(n % 2 == 0){
//             cout<<(n / 2) - 1 << "\n";
//         }
//         else{
//             cout << n / 2 << "\n";
//         }
//     }



//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        string str[15];
        for(int i = 1;i <= 9;i ++)
            cin >> str[i];
        // for(int i = 1;i <= 9;i ++){
        //     for(int j = 1;j <= 9;j ++){
 
        //     }
        // }
        int x;
        x = str[1][0] - '0';
        str[1][0] = (x + 1 > 9)? 1 + '0' : (x+1) + '0'; 
        x = str[2][3] - '0';
        str[2][3] = (x + 1 > 9)? 1 + '0' : (x+1) + '0';
        x = str[3][6] - '0';
        str[3][6] = (x + 1 > 9)? 1 + '0' : (x+1) + '0';
        x = str[4][1] - '0';
        str[4][1] = (x + 1 > 9)? 1 + '0' : (x+1) + '0';
        x = str[5][4] - '0';
        str[5][4] = (x + 1 > 9)? 1 + '0' : (x+1) + '0';
        x = str[6][7] - '0';
        str[6][7] = (x + 1 > 9)? 1 + '0' : (x+1) + '0';
        x = str[7][2] - '0';
        str[7][2] = (x + 1 > 9)? 1 + '0' : (x+1) + '0';
        x = str[8][5] - '0';
        str[8][5] = (x + 1 > 9)? 1 + '0' : (x+1) + '0';
        x = str[9][8] - '0';
        str[9][8] = (x + 1 > 9)? 1 + '0' : (x+1) + '0';
 
        for(int i = 1;i <= 9;i ++)
            cout << str[i] << "\n";
 
        }
 
 
 
    return 0;
 }