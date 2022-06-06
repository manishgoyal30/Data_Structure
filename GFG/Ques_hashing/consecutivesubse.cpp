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

int longestsub(int arr[],int n)
{
    unordered_set<int>h;
    int res=1;
    for(int i=0;i<n;i++){
        h.insert(arr[i]);
    }
    for(int i=0;i<n;i++){   
    
        if(h.find(arr[i]-1)==h.end()){
            int curr=1;
            while(h.find(arr[i]+curr)!=h.end())
            curr++;
            res=max(curr,res);
        }
    }
    return res;
}


int main(){
    int arr[]={2,9,4,3,10};     
    int n=sizeof(arr)/sizeof(arr[0]);    
    cout<<longestsub(arr,n);
    return 0;
}

