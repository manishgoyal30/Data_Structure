#include<bits/stdc++.h>
using namespace std;




////////********efficient********//////
int maxlen(int arr[],int n, int sum){
    unordered_map<int,int>h;

    int pre_sum=0,res=0;

    for(int i=0;i<n;i++){
        pre_sum=pre_sum+arr[i];
        if(pre_sum==sum)  //{5,2,3} and sum = 5; 
        res=i+1;
        if(h.find(pre_sum)==h.end())
        h.insert({pre_sum,i});
        if(h.find(pre_sum-sum)!=h.end())
        res=max(res,i-h[pre_sum-sum]);
        
    }
    return res;
}


////////**Naive*********//
// int maxlen(int arr[],int n, int sum){
//     int res =0;
//     for(int i=0;i<n;i++){
//         int curr_sum=0;
//         for(int j=i;j<n;j++){
//             curr_sum+=arr[j];
//             if(curr_sum==sum)
//             res=max(res,j-i+1);
//         }    
//     }
//     return res;
// }





int main(){

    int arr[]={5,8,-4,-4,9,-2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    cout<<maxlen(arr,n,sum);
    return 0;
}


