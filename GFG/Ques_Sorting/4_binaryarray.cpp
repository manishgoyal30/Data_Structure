//Taking o{n} auxilary space

#include <bits/stdc++.h>
using namespace std;


// int partition(int arr[], int l, int h){
//        int i=l, j=h;
//        int pivot =1;
//        while(l<h){           
//            do{
//                 i++;      
//            }while(arr[i]>pivot);

//            do{
//                 i++;      
//            }while(arr[i]>pivot);

//            if(i<j)
//            swap(arr[i], arr[j]);
//        }
//        swap(arr[l], arr[j]);
//        return j;
//        }



int main()
{
   int n,p,x,s;
   cin>>n;   
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   } 

   int j=0;
   for(int i=0;i<n;i++){
       if(a[i]==0){
           swap(a[i], a[j]);
           j++;           
       }
   }
   
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   } 
}