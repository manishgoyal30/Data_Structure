#include <bits/stdc++.h>
using namespace std;

int peak(int arr[],int n){
    long long int low =0, high=n-1;
    long long int ans=-1;
    while(low<=high){
        int mid = (low+high)/2;        


    if(mid ==0 || arr[mid]>arr[mid+1])
       return arr[mid+1];

    else if(arr[mid+1]>arr[mid])
       low = mid+1;

    else
       high = mid-1;       
       
    }
     return -1;
}

int main()
{
   int n,x,K;
   cin>>n;
   int arr[n]; 
   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }  
   cout<<peak(arr,n);  
   return 0;

    
}

