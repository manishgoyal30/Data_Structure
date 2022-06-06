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

void findRepeating(int arr[], int N)
{
 
    unordered_set<int>s;

    for (int i = 0; i < N; i++)
    {
        if(s.empty()==false && s.find(arr[i])!=s.end())
        cout<<arr[i]<<" ";
        s.insert(arr[i]);
    }
}



int main(){
    int arr[]={4, 2, 4, 5, 2, 3, 1};     
    int N=sizeof(arr)/sizeof(arr[0]);    
    findRepeating(arr,N);
    return 0;
}

