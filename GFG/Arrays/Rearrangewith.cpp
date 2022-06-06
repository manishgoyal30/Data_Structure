//Taking o{n} auxilary space

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,p,x;
   cin>>n;   
   int a[n];
   int b[n]; 

//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }    
//    for(int i=0;i<n;i++){
//        x=a[i];
//        b[i] = a[x];
       
//    }  
//    for(int i=0; i<n; i++){
//       a[i]=b[i];
//    }

     for(int i=0;i<n;i++){
        
        a[i]= a[i]+(a[a[i]%n]*n);

     }



   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }


}