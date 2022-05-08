#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,p;
   cin>>n;
   int a[n];
   
   for(int i=0;i<n;i++){
       cin>>a[i];
   }  
   sort(a,a+n);
   int min=1;
   for(int i=0;i<n;i++){
       if(a[i]==min){
           min++;
       }
   }
   cout<<min;
    return 0;
}
