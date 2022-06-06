#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,x;
   cin>>n;
   int arr[n]; 
   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   } 
   int temp[n]; //created a temp array
   for(int i=0;i<n;i++){

       int min_ind = i;

       for(int j=i+1;j<n;j++){ 
        //comparing all elements in the array
           if(arr[j]<arr[min_ind]){   
               min_ind=j;
           }
       }
       
       swap(arr[i],arr[min_ind]);   
   } 
   for(int i=0;i<n;i++){
       cout<<arr[i];
   } 

 
}
