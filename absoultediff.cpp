#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,minimum;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }   
   minimum = abs(arr[n-1]-arr[0]);
   for(int i=0;i<n-1;i++){
       minimum = min(minimum,abs(arr[i]-arr[i+1]));
   }  
  cout<<minimum;
    return 0;
}