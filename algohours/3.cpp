#include <bits/stdc++.h>
using namespace std;

int main()
{	

       int n,p;
       cin>>n;
       int arr[n];
       int sum =0;
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       for(int i=0;i<n;i++){
           sum = sum +arr[i];
       }
        int m=sum;

       for(int i=0;i<n;i++){          
           p=arr[i];
           if(arr[i]==p-1){
               sum = sum-(p-1);
           }
           if(arr[i]=p+1){
               sum = sum-(p+1);
           }           
       }    
            
    cout<<m;
	return 0;
}