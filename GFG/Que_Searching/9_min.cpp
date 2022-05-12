#include <bits/stdc++.h>
using namespace std;

int peak(int arr[],int n){
    
    int low =0, high=n-1;

    if(arr[low]<arr[high])
    return arr[low];

    while(low<=high){

        int mid = (low+high)/2;

        if(arr[mid-1]>arr[mid])
        return arr[mid];

        else if(arr[mid+1]<arr[mid])
        return arr[mid+1];

        else if(arr[mid]>arr[low])
        low = mid+1;

        else if(arr[mid]<arr[high])
        high = mid-1;
    }
    return -1;
}

int main()
{
   int n,x;
   cin>>n;
   int arr[n]; 
   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }  
   cout<<peak(arr,n);  
   return 0;

    
}

