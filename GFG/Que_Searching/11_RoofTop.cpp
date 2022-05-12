#include <bits/stdc++.h>
using namespace std;

int roofTop(int arr[],int n){
  int maxStep=0;
  int count=0;

  for(int i=1;i<n;i++){
      if(arr[i]>arr[i-1]){
          count++;
          maxStep = max(maxStep, count);
      }
      else
      count=0;
  }
  return maxStep;

}


int main()
{
   int n,x;
   cin>>n;
   int arr[n];    
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }  
   cout<<roofTop(arr,n);  
   return 0;

    
}

