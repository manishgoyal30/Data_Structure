
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int N,count=0;
   cin>>N;  
   int arr[N];   
   for(int i=0;i<N;i++){
       cin>>arr[i];
   }   
   if(N==1)
   return arr[0];

   sort(arr,arr+N);

   for(int i=0;i<N;i++){
       if(arr[i]==arr[i+1])
       count++; 
       
       else
       count=1;
       
       if(count>N/2)
       cout<<arr[i];          
   }    
  
   return 0;    
}

