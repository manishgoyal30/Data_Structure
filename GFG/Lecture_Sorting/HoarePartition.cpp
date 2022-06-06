#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l, int h){
    int pivot = arr[l];

    int i =l, j=h+1;
    while(i<j){
        do{
            i++;
        }while(arr[i]<pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i<j)
        swap(arr[i], arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;
}
 

void quicksort(int arr[], int l, int h){
    if(l<h){
        int j=partition(arr,l,h);
        quicksort(arr,l,j);
        quicksort(arr,j+1,h);
    }
}

int main()
{
   int n,l,h,p;
   cin>>n; 
   cin>>l;
   cin>>h;
    
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }  

  quicksort(arr,l,h);
  
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   } 
}
