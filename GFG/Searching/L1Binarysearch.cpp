// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//    int n,p;
//    cin>>n;
//    int arr[n]; 
   
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }  
//    cin>>p;

//    int z=0;
//    for(int i=0;i<n;i++){
//        if(arr[i]==p)
//        cout<<i;
//    }     

//     return -1;
// }



/*******************************************/
//******************************************/
//*****Iterative solution**************/

#include <bits/stdc++.h>
using namespace std;

int bSearch(int arr[],int n, int x){
    int low =0, high=n-1;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        high = mid-1;
        else
        low = mid+1;
    }
    return -1;
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
   cout<<bSearch(arr,n,x);  
   return 0;

    
}

