//Taking o{n} auxilary space

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,p,x;
   cin>>n;   
   int a[n];
   int maxdiff=0;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }    
   
   for(int i=0;i<n;i++){
      
       for(int j=n-1;j>i;j--){
          if(a[j]>=a[i]){
          maxdiff = max(j-i, maxdiff);
          break;
          }

       }
       
   }  
   cout<<maxdiff;

}