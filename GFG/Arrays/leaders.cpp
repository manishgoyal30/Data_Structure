#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;    
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }    
   int cur = arr[n-1];
   cout<<arr[n-1];

   for(int i=n-2;i>=0;i--){
       if(cur<arr[i]){
           cur=arr[i];
           cout<<cur;
       }
       
   } 
}
