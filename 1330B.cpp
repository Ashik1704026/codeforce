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