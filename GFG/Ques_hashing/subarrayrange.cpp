#include<bits/stdc++.h>
using namespace std;

int subarry(int arr[],int n, int sum){
    unordered_map<int,int>h;
    int cur_sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        cur_sum=cur_sum+arr[i];

        if(cur_sum==sum){
        count++;
        } 
        
        if(h.find(cur_sum-sum)!=h.end()){
        count=count+h[cur_sum-sum];  
        }
        h[cur_sum]++;
    }
    return count;
}

int main(){
    int  arr[]={10,2,-2,-20,10};     
    int n=sizeof(arr)/sizeof(arr[0]);    
    int sum=-10;
    cout<<subarry(arr,n,sum);
    return 0;
}

