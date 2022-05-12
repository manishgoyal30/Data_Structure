
#include <bits/stdc++.h>
using namespace std;

int count(int arr[],int N)
{
   int low=0,high=N-1;
   while(low<=high) {
       if(arr[N-1]==1)
       return N;

       int mid = (high+low)/2;

       if(arr[mid]==1 && arr[mid+1]==0)
       return mid+1;
       if(arr[mid]==1)
       low=mid+1;
       else
       high = mid-1;
}
return 0;
}

int main()
{
   int n,x;
   cin>>n;
   int arr[n];   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }    
   cout<<count(arr,n);
   return 0;    
}

