#include<bits/stdc++.h>
using namespace std;
int t,ar[200010],n,mk[200020];
bool check(int l,int r){
	memset(mk,0,sizeof mk);
	int sz = r - l + 1;
	for(int i = l;i <= r;i ++)
		if(ar[i] <= sz && !mk[ar[i]])mk[ar[i]] = 1;
		else return 0;
	return 1;	
} 
int main(){
	cin >> t;
	while(t--){
		int mx=0,ans=0,fl=0;
		cin >> n;
		for(int i = 1;i <= n;i ++)cin >> ar[i],mx=max(mx,ar[i]);
		if(check(1,mx) && check(mx + 1,n)) ans ++,fl|=1;
		if(n - mx != mx && check(1,n - mx) && check(n - mx + 1,n)) ans ++,fl |= 2;
		cout << ans << "\n";	
		if(fl & 1) cout << mx << " " << n-mx << "\n";
		if(fl & 2 && mx != n-mx) cout << n-mx << " " << mx << "\n";		
	}
} 











// cin >> n >> m;
//     pair<int,int> l[n],s[n];
//     for(int i = 0;i < m;i ++){
//         cin >> l[i].first;
//         l[i].second = i;
//     }
//     sort(l,l+n);
//     int x = n;
//     for(int i = m - 1;i >= 0;i --){
//         int p = x + 1 - l[i].first;
//         if(p > 0){
//             s[i].first = l[i].second;
//             s[i].second = p;
//             x = p - 1;
//         }
//         else{
//             s[i].first = l[i].second;
//             s[i].second = 1;
//             x = p;
//         }
//     }
//     cout << x;

//     return 0;