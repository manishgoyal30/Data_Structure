#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,p;
   cin>>n;   
   int a[n]; 

   vector<long long int> v;   

   for(int i=0;i<n;i++){
       cin>>a[i];
   }  
   
   if(n%2==0){
   for(int i=0;i<n/2;i++){
       v.push_back(a[n-1-i]);
       v.push_back(a[i]);
   }
   }

   else{
   for(int i=0;i<=(n-1)/2;i++){
       v.push_back(a[n-1-i]);
       v.push_back(a[i]);
   }
   }
   for(int i=0; i<n; i++){
      a[i]=v[i];
   }
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }


}