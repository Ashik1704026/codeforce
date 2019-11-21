// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,s=0,indx=0;
//     cin>>n;
//     pair<int,int>ar[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i].first;
//         ar[i].second=i;
//         if(ar[i].first<0)
//             s++;
//     }
//     sort(ar,ar+n);
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i].first>=0)
//             indx=i;
//     }
//     if(n%2==0)
//     {
//         if(s%2==0)
//         {

//         }
//     }





//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ar[n],br[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i];
//         cin>>br[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i]!=br[i])
//         {
//             cout<<"rated";
//             return 0;
//         }
//     }
//     int max=ar[0];
//     for(int i=1;i<n;i++)
//     {
//         if(ar[i]<=max)
//             max=ar[i];
//         else
//         {
//             cout<<"unrated";
//             return 0;
//         }
        
//     } 
//     cout<<"maybe";
//     return 0;
// }








// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     long int ar[n];
//     for(int i=0;i<n;i++)
//         cin>>ar[i];
//     sort(ar,ar+n);
//     int mn=ar[0];
//     int mx=ar[n-1];
//     int s=0;
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i]!=mn && ar[i]!=mx)
//             s++;
//     }
//     cout<<s;



//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,s=0;
//     cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++)
//         cin>>ar[i];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n-1;j>=i+1;j--)
//         {
//             if(ar[j]<ar[j-1])
//             {
//                 int temp=ar[j];
//                 ar[j]=ar[j-1];
//                 ar[j-1]=temp;
//                 s++;
//             }
//         }
//     }
//     for(int i=0;i<n-1;i++)
//         cout<<ar[i]<<" ";
//     cout<<ar[n-1]<<"\n"<<s<<"\n";

//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     long ar[n],br[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i];
//         br[i]=ar[i];
//     }
//     long l=0,r=0;
//     for(int i=0;i<n-1;i++)
//     {
//         if(ar[i]>ar[i+1])
//         {
//             l=i;
//             break;
//         }
//     }
//     for(int i=n-1;i>0;i--)
//     {
//         if(ar[i]<ar[i-1])
//         {
//             r=i;
//             break;
//         }
//     }
//     if(l==r)
//     {
//         cout<<"yes\n1  1";
//         return 0;
//     }
//     for(int i=l,j=r;i<=r;i++,j--)
//     {
//         br[i]=ar[j];
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         if(br[i]>br[i+1])
//         {
//             cout<<"no\n";
//             return 0;
//         }
//     }
//     cout<<"yes\n"<<l+1<<"  "<<r+1;


//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++)
//         cin>>ar[i];
//     int i=0,j=0;
//     for(int i=0;i<n-1;i++)
//         cout<<ar[i]<<" ";
//     cout<<ar[n-1]<<"\n";
//     for(i=1;i<n;i++)
//     {
//         int key=ar[i];
//         j=i-1;
//         while(j>=0 && ar[j]>key)
//         {
//             ar[j+1]=ar[j];
//             j--;
//             ar[j+1]=key;
//         }
//         for(int i=0;i<n-1;i++)
//             cout<<ar[i]<<" ";
//         cout<<ar[n-1]<<"\n";
//     }



//     return 0;
// }





// #include<bits/stdc++.h> 
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++)
//         cin>>ar[i];
//     int mini,cnt=0;
//     for(int i=0;i<n;i++)
//     {
//         mini=i;
//         for(int j=i;j<n;j++)
//         {
//             if(ar[j]<ar[mini])
//                 mini=j;
//         }
//         if(i!=mini)
//             cnt++;
//         int temp=ar[i];
//         ar[i]=ar[mini];
//         ar[mini]=temp;
//     }
//     for(int i=0;i<n-1;i++)
//         cout<<ar[i]<<" ";
//     cout<<ar[n-1]<<"\n"<<cnt<<"\n";


//     return 0;
// }



   
// #include <bits/stdc++.h>
// using namespace std;
// long int cmp_count = 0;
// long int ar[500010];
// void merge(int left,int mid, int right){
// 	int n1 = mid - left;
// 	int n2 = right - mid;
// 	int L[n1+1],R[n2+1];
// 	for(int i = 0; i < n1; i++) L[i] = ar[left + i];
// 	for(int i = 0; i < n2; i++) R[i] = ar[mid + i];
// 	L[n1]=INT_MAX;
//     R[n2]=INT_MAX;

// 	int i = 0, j = 0;
// 	for(int k = left;k < right; k++){
// 		if(L[i] <= R[j]){
// 			ar[k] = L[i++];
// 			cmp_count++;
// 		}else{
// 			ar[k] = R[j++];
// 			cmp_count++;
// 		}
// 	}
// }

// void mergeSort(int left,int right){
// 	if(left+1 < right){
// 		int mid = (left+right)/2;
// 		mergeSort(left,mid);
// 		mergeSort(mid,right);
// 		merge(left,mid,right);
// 	}
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	for(int i = 0; i < n; i++) 
//         cin>>ar[i];
// 	mergeSort(0,n);
// 	for(int i = 0; i < n-1; i++) 
//         cout<<ar[i]<<" ";
// 	cout<<ar[n-1]<<"\n"<<cmp_count<<"\n";

// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    long s=0;
    sort(ar,ar+n);
    for(int i=0;i<n;i+=2)
        s+=ar[i+1]-ar[i];
    cout<<s<<"\n";



    return 0;
}