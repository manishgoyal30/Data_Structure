#include <bits/stdc++.h>
using namespace std;

//First occ function
int firOccu(int arr[],int n, int x){
    int low =0, high=n-1;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]>x)
        high = mid-1;
        else if(arr[mid]<x)
        low = mid+1;
        else
        {
            if(mid==0 || arr[mid-1]!=arr[mid])
            return mid;
            else
            high = mid-1;
        }
    }
    return -1;
}

//Last occ function
int lastOccu (int arr[],int n, int x){
    int low =0, high=n-1;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]>x)
        high = mid-1;
        else if(arr[mid]<x)
        low = mid+1;
        else
        {
            if(mid==0 || arr[mid]!=arr[mid+1])
            return mid;
            else
            low = mid+1;
        }
    }
    return -1;
}

//Counting occur Function
int countOcc(int arr[], int n, int x ){
    int first = firOccu(arr,n,x);
    if(first==-1)
    return 0;
    else
    return (lastOccu(arr,n,x)-first+1);
    
}

int main()
{
   int n,x;
   cin>>n;
   int arr[n]; 
   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }  
   cin>>x;
   cout<<countOcc(arr,n,x);  
   return 0;

    
}
