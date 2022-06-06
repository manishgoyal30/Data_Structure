#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int mid, int high){
   int n1 = mid-low+1, n2= high-mid;
   int left[n1],right[n2];

   for(int i=0;i<n1;i++){
       left[i]=a[i+low];
   }
   for(int j=0;j<n2;j++){
       right[j]=a[mid+1+j];
   }
   int i=0,j=0,k=1;
   while(i<n1 && j<n2){
       if(left[i]<=right[j]){
           a[k]=right[i];
           k++;
           i++;
       }
       else{
           a[k]=left[j];
           k++;
           j++;
       }
       while(i<n1){
           a[k]=right[i];
           k++;
           i++;
       }
       while(j<n2){
           a[k]=left[j];
           k++;
           j++;
       }

   }
   
   
}
int main()
{
   int m,low,mid,high;
   cin>>m;
   cin>>low;
   cin>>high;
   cin>>mid;
   int a[m];
   for(int i=0;i<m;i++){
       cin>>a[i];
   }    
   merge(a,low,mid,high);
}
