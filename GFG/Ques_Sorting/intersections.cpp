
#include <bits/stdc++.h>
using namespace std;

int inter(int arr1[], int arr2[], int N, int M){
    int i=0, j=0;
    while(i<N && j<M){
        if(i>0 && arr1[i]==arr1[i-1]){
            i++;
            continue;
        }
        if(arr1[i]<arr2[i]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++; j++;
        }

    }
}

int main()
{
   int n,p,x,s;
   cin>>n;   
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   } 
     
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   } 
}