#include<bits/stdc++.h>
using namespace std;

// Naive Solution

// int inversion(int arr[], int n){
//     int res = 0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j])
//             res ++;
//         }
//     }
//     return res;
// }   


int inversion(int arr[], int n){
    
  
}   



int main()
{
   int n;
   cin>>n;    
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }  
   cout<< inversion(arr,n);
}
