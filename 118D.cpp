// #include<stdio.h>
// #include<string.h>
// #define MOD 100000000
// int memo[101][101][2][11];
// /*
// 	The state for the problem is define by 4 variable
// 	1) rem_X indicating the remaining objects of type X to be placed 
// 	2) rem_Y indicating the remaining objects of type X to be placed 
// 	3) prev_type tell us what were the last set of objects that we placed. 1 indicates that
// 		we had placed the object(s) of type 'X' and 1 tells us that we had placed 
// 		objects of type 'Y'
// 	4) prev_quant indicates how many objects of prev_type we have placed consectively	
// */
// int recursion(int rem_X,int rem_Y,int prev_type,int prev_quant,int k1,int k2)
// {
// 	// All done. One lining is complete
// 	if(rem_X == 0 && rem_Y == 0)
// 	return 1;
// 	// If we have already calculated the result, then return it
// 	if(memo[rem_X][rem_Y][prev_type][prev_quant] > -1)
// 	return memo[rem_X][rem_Y][prev_type][prev_quant];
// 	// Else calculate the result
// 	else
// 	{
// 		int count=0;
// 		// If previous object(s) were of type X
// 		if(prev_type == 0)
// 		{
// 			// We can place 'Y' , no issues here
// 			if(rem_Y > 0)
// 			count += recursion(rem_X , rem_Y-1 , 1 , 1 , k1 , k2);
// 			// We can place X here provided prev_quant + 1 <= k1
// 			if(prev_quant < k1 && rem_X > 0)
// 			count += recursion(rem_X-1 , rem_Y , 0 , prev_quant + 1 , k1, k2);
// 		}
// 		// Else previous object(s) were of type Y
// 		else
// 		{
// 			// We can place 'X' , no issues here
// 			if(rem_X > 0)
// 			count += recursion(rem_X-1 , rem_Y , 0 , 1 , k1 , k2);
// 			// We can place X here provided prev_quant + 1 <= k2
// 			if(prev_quant < k2 && rem_Y > 0)
// 			count += recursion(rem_X , rem_Y-1 , 1 , prev_quant + 1 , k1, k2);
// 		}
// 		// Cache the results for duture use. And return the same
// 		memo[rem_X][rem_Y][prev_type][prev_quant]=(count % MOD);
// 		return count % MOD;
// 	}
// }
// int main()
// {
// 	int n1,n2,k1,k2;
// 	scanf("%d%d%d%d",&n1,&n2,&k1,&k2);
// 	// Initializig the values of memoization matrix to -1
// 	memset(memo,-1,sizeof(memo));
// 	// The main function that calculates our result
// 	printf("%d\n",recursion(n1,n2,0,0,k1,k2));
// 	return 0;
// }




// MD. Ashiqur Rahman
#include<bits/stdc++.h>
using namespace std;

#define         ll         long long
#define         pb         push_back
#define         scn(x)     scanf("%d",&x)
#define         scnl(x)    scanf("%lld",&x)
#define         prnt(x)    printf("%d\n",x)
#define         prntl(x)   printf("%lld\n",x)
#define         prii       pair<int,int>
#define         mapii      map<int,int>
#define         mapll      map<ll,ll>
#define         mapci      map<char,int>
#define         mapcl      map<char,ll>
#define         mapsi      map<string,int>
#define         mapsl      map<string,ll>
#define         prll       pair<ll,ll>
#define         vctri      vector<int>
#define         vctrl      vector<ll>
#define         vctrd      vector<double,double>
#define         all(a)     (a).begin(),(a).end()
#define         rall(a)    (a).rbegin(),(a).rend()
#define         F          first
#define         S          second
#define         mp         make_pair
#define         ftc(x)     cerr << #x << ": " << x << " " << '\n';
#define         PI         acos(-1)
#define         lcm(a,b)   ((a*b)/__gcd(a,b))
#define         fast       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define         sqr(a)     ((a)*(a))
#define         memset(x,v) memset(x, v, sizeof(x))
#define         ask         '\n'
#define         negmod(x,y) ((x % y) + y) % y    

vector<bool> isPrime(10000010, true);
inline void seivePrime(ll L, ll R) { ll lim = sqrt(R);for (ll i = 2; i <= lim; ++i){
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;}if (L == 1)isPrime[0] = false;}
inline ll chckPrime(ll L,ll prme){return isPrime[prme - L];}
inline ll cntPrime(ll L,ll R){return count(isPrime.begin(),isPrime.begin() + R - L + 1,true);}



ll memo[101][101][2][11];
ll md = 1e8;
ll sol(int rem_x,int rem_y,int prev_item,int prev_quan,int k1,int k2){
    // cout << rem_x << " " << rem_y << " ";
    if(rem_x == 0 && rem_y == 0)
        return 1;
    if(memo[rem_x][rem_y][prev_item][prev_quan] > -1)
        return memo[rem_x][rem_y][prev_item][prev_quan];
    else{
        ll cnt = 0;
        if(prev_item == 0){
            if(rem_y > 0)
                cnt += sol(rem_x,rem_y - 1,1,1,k1,k2);
            if(prev_quan < k1 && rem_x > 0)
                cnt += sol(rem_x - 1,rem_y,0,prev_quan + 1,k1,k2);
        }
        else{
            if(rem_x > 0)
                cnt += sol(rem_x - 1,rem_y,0,1,k1,k2);
            if(prev_quan < k2 && rem_y > 0)
                cnt += sol(rem_x,rem_y - 1,1,prev_quan + 1,k1,k2);
        }
        memo[rem_x][rem_y][prev_item][prev_quan] = cnt % md;
        return cnt % md;
    }
    
}



int main(){
    fast;
    int n1,n2,k1,k2;
    cin >> n1 >> n2 >> k1 >> k2;
    memset(memo,-1);
    cout << sol(n1,n2,0,0,k1,k2) << "\n";



    return 0;
}