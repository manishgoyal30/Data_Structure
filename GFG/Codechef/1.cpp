#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,x,t,s,p,q,y,i;
   cin>>s;
   for(int k=0;k<s;k++){
   cin>>n; 
   cin>>m;     
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   } 
   sort(a, a+n);  
   for(i=n-2;i>=0;i--){    
       if(a[i]!=a[n-1]) {
            x=a[i];             
            break;           
       }                             
   }
    
   if(i==0){
       x=a[0];       
   }

   y=a[n-1];
   int t=0;  
        p= x+a[n-1]+((x%m)-(y%m)+m)%m;
        q= x+a[n-1]+(-(x%m)+(y%m)+m)%m;
        t = max(q,p);   
   cout<<t<<endl;
   }
}
