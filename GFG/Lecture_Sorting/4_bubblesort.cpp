// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//    int n,x;
//    cin>>n;
//    int arr[n]; 
   
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }  
//   for(int i=0;i<n-1;i++){
//       for(int j=0;j<n-i-1;j++){
//           if(arr[j]>arr[j+1])
//           swap(arr[j],arr[j+1]);
//       }
//   }

//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }




////TIMECOMPLEXITY: reduced/////

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,x;
   cin>>n;
   int arr[n]; 
   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }  

  for(int i=0;i<n-1;i++){
      int swapped=false;
      for(int j=0;j<n-i-1;j++){

          if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              swapped=true;
          }
     }
     if(swapped==false)
     break;
  }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
