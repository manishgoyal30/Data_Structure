#include<bits/stdc++.h>
using namespace std;



////////**Naive*********//
int maxlen(int arr[],int n){
    sort(arr,arr+n);

    int count=1,res=1;
    for(int i=1;i<n;i++){       
        if(arr[i]==arr[i-1]+1)
        count++; 
        else{
            res=max(res,count);
            count=1;
        }              
    }    res=max(res,count);
        return max(res,count);     
}

int main(){
    int arr1[]={1,9,3,4,2,20};
    
    int n=sizeof(arr1)/sizeof(arr1[0]);
    cout<<maxlen(arr1,n);
    return 0;
}


