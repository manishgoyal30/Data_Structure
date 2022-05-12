#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int low, int high, int x){
    if(low>high)
    return -1;

    int mid = ((low+high)/2); 

    if(arr[mid]==x) { 
           return mid; 
    }  
    else if(arr[mid]>x)
        return binarySearch(arr,low,mid-1,x);
    else  
        return binarySearch(arr,mid+1,high,x);
       
    }

int search(int arr[],int x){
   if(arr[0]==0)
   return 0;
   int i=1;
   while(arr[i]<=x){
       i=i*2;
   }
   if(arr[i]==x)
   return i;
//search(arr,low,high, number)
   return binarySearch(arr,i/2+1,i-2,x);
}

int main()
{
   int n,x;
   cin>>n;
   int i;
   int arr[n];    
   for(i=0;i<n;i++){
       cin>>arr[i];
   }  
   cin>>x;
   
   cout<<search(arr,x);  
   return 0;
    
}

