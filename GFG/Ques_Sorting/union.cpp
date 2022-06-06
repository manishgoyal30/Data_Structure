
#include <bits/stdc++.h>
using namespace std;

int inter(int arr1[], int arr2[], int N, int M){
    int i=0, j=0;
    while(i<N && j<M){
        if(i>0 && arr1[i]==arr1[i-1]){
            i++;
            continue;
        }
        if(j>0 && arr1[j]==arr1[j-1]){
            j++;
            continue;
        }
        if(arr1[i]<arr2[i]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++; j++;
        }
        while(i<M){
            if(i>0 && arr1[i]!=arr1[i-1]){
                cout<<arr1[i]<<" ";
                }
        }
        while(j<N){
            if(j>0 && arr2[j]!=arr2[j-1]){
                cout<<arr2[j]<<" ";
                }
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