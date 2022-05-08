#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,d;
   cin>>n;
   cin>>d;
   int arr[n],temp[n],x;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }   
   
   if(d>n){
       d=d-n;
   }
   else 
   d=d;


   for(int i=0;i<d;i++){
       temp[i]=arr[i];
   }   
   for(int i=d;i<n;i++){
       arr[i-d]=arr[i];
   }
   for(int i=0;i<d;i++){
       arr[n-d+i]=temp[i];
   }
    for(int j=0;j<n;j++){
       cout<<arr[j]<<" ";
   }   
    return 0;
}