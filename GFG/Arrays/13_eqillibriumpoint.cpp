//nahi hua

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,lsum=0,rsum=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }  
   int flag =0;

    for(int i=n-1;i>=0;i--){
     lsum = lsum+a[i];
     rsum = rsum+a[n-i-1];
     if(lsum==rsum){
        cout<<i;
        flag=1;
        break;
     }          
   }  
   if(flag==0)
   cout<<"-1"<<endl;
    return 0;
}

