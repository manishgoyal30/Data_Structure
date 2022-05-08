#include <bits/stdc++.h>
using namespace std;

int insert(int arr[],int n,int x, int cap, int pos)
{
    if(n==cap)
    return n;
    int index = pos-1;
    for(int i=n-1;i>=index;i++)
    arr[i+1]=arr[i];
    arr[index]=x;
    return(n+1);
}
int main()
{
   int n,x,p,cap,pos;
   cin>>n;
   int arr[n];   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }  
   cin>>x;
   cin>>cap;
   cin>>pos;
   cout<<insert(arr,n,x,cap,pos);
   return 0;    
}

