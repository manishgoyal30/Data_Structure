#include<bits/stdc++.h>
using namespace std;

/////***NAIVE*****///////
// bool isPair(int arr[],int n, int sum){
    
//     for(int i=0;i<n;i++)
//     {
//         int curr_sum=0;
//        for(int j=i;j<n;j++){
//            curr_sum+=arr[j];
//            if(curr_sum==sum)
//            return true;
//        }    
//        }
//     return false;
//    }


////////********efficient********//////
bool isSum(int arr[],int n, int sum){
    unordered_set<int>h;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum=pre_sum+arr[i];
        if(pre_sum==sum)
        return true;
        if(h.find(pre_sum-sum)!=h.end())
        return true;
        h.insert(pre_sum);
    }
    return false;
}





int main(){

    int a[]={3,8,4,7,6,1};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=14;

    cout<<isSum(a,n,sum);
    return 0;
}


