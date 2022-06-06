#include<bits/stdc++.h>
using namespace std;

int subarry(int arr[],int n, int sum){
    unordered_map<int,int>h;
    int subarray=0,presum=0;
    h[0]=1;
    for(int i=0;i<n;i++){
        presum=presum+arr[i]; //compute prefix sum until current elements
        subarray=subarray+h[presum-sum]; //ass no of times presum has already appeeared
        h[presum]++;
    }
    return subarray;

   
}

int main(){
    int  arr[]={10,2,-2,-20,10};     
    int n=sizeof(arr)/sizeof(arr[0]);    
    int sum=-10;
    cout<<subarry(arr,n,sum);
    return 0;
}

