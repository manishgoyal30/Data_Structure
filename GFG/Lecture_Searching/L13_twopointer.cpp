#include <bits/stdc++.h>
using namespace std;

// bool twoPointer(int arr[],int n, int x)
// {
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++)
//        if(arr[i]+arr[j]==x)
//        return true;
//    }
//     return false;
// }

bool twoPointer(int arr[],int n, int x)
{
   int left =0,right=n-1;
   while(left<right){
       if(arr[left]+arr[right]==x)
       return true;
       else if(arr[left]+arr[right]>x)
       right--;
       else
       left++;
   }
    return false;
}

int main()
{
   int n,x;
   cin>>n;
   int arr[n];   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }    
   cin>>x; 
   cout<<twoPointer(arr,n,x);  
   return 0;    
}

