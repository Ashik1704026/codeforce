#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans = 0;
    cin >> n;
    string str1,str2;
    cin >> str1 >> str2;
    vector<int> v1,v2;
    vector<pair<int,int> > sol;
    for(int i = 0;i < n;i ++){
        if(str1[i] != str2[i]){
            if(str1[i] == 'a')
                v1.push_back(i);
            else{
                v2.push_back(i);
            }
        }
    }
    if(v1.size() % 2 != v2.size() % 2){
        cout << "-1\n";
        return 0;
    }  
    int s1 = v1.size(),s2 = v2.size();
    
    for(int i = 0;i < s1 - 1;i += 2){
        sol.push_back(make_pair(v1[i],v1[i+1]));
        ans ++;
    }
    for(int i = 0;i < s2 - 1;i += 2){
        sol.push_back(make_pair(v2[i],v2[i+1]));
        ans ++;
    }
    int x = v2.size() - 1 , y = v1.size() - 1;
    if(v2.size() % 2){
        sol.push_back(make_pair(v2[x],v2[x]));
        sol.push_back(make_pair(v2[x],v1[y]));
        ans += 2;
    }
    cout << ans << "\n";
    for(int i = 0;i < ans ;i ++){
        cout << sol[i].first + 1 << " " << sol[i].second + 1 << "\n";
    }

    return 0;
}