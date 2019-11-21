#include<bits/stdc++.h>
using namespace std;
long arn[200500],arm[200500];
int binary(long l,long r,long x){
    if(l<=r){
        long mid=(l+r)/2;
        if(x==arn[mid] ) return binary(mid+1,r,x);
        else if(arn[mid]<x) return binary(mid+1,r,x);
        else return binary(l,mid-1,x);
    }
    return l;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>arn[i];
    for(int i=1;i<=m;i++) cin>>arm[i];   
    sort(arn+1,arn+n+1);
    for(int i=1;i<=m;i++){
        cout<<binary(1,n,arm[i])-1<<" ";
    }
    return 0;
}


int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
}




int binarylower(int m,int l,int u)
{
	int mid,c=0;
   	if(l<=u)
	{
 	    	mid=(l+u)/2;
      		if(m==arn[mid])
      		{
        	 	return binarylower(m,mid+1,u);
      		}
      		else if(m<arn[mid])
		{	
        	  	return binarylower(m,l,mid-1);
      		}
      		else
		{     
			return binarylower(m,mid+1,u);
       		}
    	}
   	else
        	return l;
  }