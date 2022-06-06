#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[],int m, int n){
    int j=0,i=0;
    while(i<m && j<n){
        if(a[i]<b[i]){
             cout<<a[i]<<" ";
             i++;
        }
          else{
             cout<<b[i]<<" ";
             j++;
        }       
    }
    while(i<m){
         cout<<a[i]<<" ";
             i++;
    }
    while(j<n){
         cout<<b[j]<<" ";
             i++;
    }
}
int main()
{
   int n,x,m;
   cin>>m;
   cin>>n;
   int a[m],b[n]; 
     
   for(int i=0;i<m;i++){
       cin>>a[i];
   } 
   for(int i=0;i<n;i++){
       cin>>b[i];
   } 
   merge(a,b,m,n);
}
