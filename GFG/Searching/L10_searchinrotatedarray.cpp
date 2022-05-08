#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int n, int x){
    int low =0, high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x)
        return mid;
//when left half is sorted
        if(arr[mid]>arr[low]){
//compare with the elements of left half 
            if(x>=arr[low] && x<arr[mid])  
            high=mid-1;          
            else
            low=mid+1;
        }
        else{
//compare with the elements of right half 
            if(x>arr[mid] && x<=arr[high])
            low=mid+1;
            else
            high=mid-1;
        }
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
   cin>>x;
   cout<<search(arr,n,x);  
   return 0;    
}

