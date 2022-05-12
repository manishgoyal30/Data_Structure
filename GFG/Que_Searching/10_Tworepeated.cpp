// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int n,x;
//    cin>>n;
//    int arr[n];
//    int res = 0;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }  
//    for(int i=1;i<n-1;i++){       
//        int lmax=arr[i], rmax=arr[i];       
//        for(int j=0;j<i;j++)
//        lmax= max(lmax,arr[j]);
       
//        for(int j=i+1;j<n;j++)
//        rmax= max(rmax,arr[j]);
//        res = res + (min(rmax,lmax)-arr[i]);
//    }
//    cout<<res;
//    return 0;

// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,x;
   cin>>n;
   int arr[n];
   int res = 0;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }  
     
       int lmax[n],rmax[n];

       lmax[0]=arr[0];  
       for(int i=1;i<n;i++)
       lmax[i]= max(lmax[i-1],arr[i]);

       rmax[n-1]=arr[n-1];    
       for(int i=n-2;i>=0;i--)
       rmax[i]= max(rmax[i+1],arr[i]);
       
       	for(int i = 1; i < n - 1; i++)
    	res = res + (min(lmax[i], rmax[i]) - arr[i]);
      
   
   cout<<res;
   return 0;

}

