#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,p;
   cin>>n;
   cin>>p;
   int a[n];
   int arr[p];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }  
   int k=1;
   int j=0;
   while(k<=n)   {
       int counter =0;
       for(int i=0;i<n;i++){
           if(k==a[i]){
           counter++;
           }          
       }
       arr[j]=counter;
       k++;
       j++;
   }

   for(int i=0;i<n;i++){
       cout<<arr[i]<<" "; 
   }

    return 0;
}