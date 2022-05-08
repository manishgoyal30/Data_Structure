//nahi hua

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
   cin>>p;   
    for(int j=1;j<=n;j++){
    int count=0;
       for(int i=1;i<=n;i++){
       if(j==a[i-1])
       count++;
   }
    cout<<count<<" ";
    }       
    return 0;
}
