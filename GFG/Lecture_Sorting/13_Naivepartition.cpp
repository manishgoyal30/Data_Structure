#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h , int p){
    int temp[h-l+1], index=0;  //created a new array

    for(int i=l;i<=h;i++){
        if(arr[i]<arr[p]){temp[index]=arr[i];
          index++;}
    }
     for(int i=l;i<=h;i++){if(arr[i]==arr[p]){
            temp[index]=arr[i];index++;}
    }
    int res = l+index-1;
    for(int i=l;i<=h;i++){if(arr[i]>arr[p]){
            temp[index]=arr[i];index++;}
    }

    for(int i=l;i<=h;i++){
            arr[i] = temp[i-l];
    }
    return res; 
  
}   



int main()
{
   int n,l,h,p;
   cin>>n; 
   cin>>l;
   cin>>h;
   cin>>p;   
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }  

  partition(arr,l,h,p);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   } 
}
