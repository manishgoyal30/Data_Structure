#include<bits/stdc++.h>
using namespace std;

// int longestsub(int arr[],int n)
// {
//     sort(arr,arr+n);
//     int res=1,curr=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[i-1]+1){
//             curr++;
//         }
//         else if(arr[i]!=arr[i-1]){
//             res=max(res,curr);
//             curr=1;
//         }
//     }
//     return max(res,curr);
// }


vector<int> sortbyfre(int arr[],int n)
{

    unordered_map<int,int>h;
   
    for(int i=0;i<n;i++){
        h[arr[i]]++;
    }

    sort(arr,arr+n, [&](int a, int b){
        return h[a]!=h[b] ? h[a]<h[b] : a>b ;});

        
}


int main(){
    int arr[]={2,9,4,3,10};     
    int n=sizeof(arr)/sizeof(arr[0]);    
    sortbyfre(arr,n);
    return 0;
}

