#include<bits/stdc++.h>
using namespace std;



////////**Naive*********//
int maxlen(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int count1=0,count0=0;
        for(int j=i;j<n;j++){
            if(arr[j]==1)
            count1++;
            else
            count0++;
             if(count1=count0)
             res= max(res,count0+count1);        
        }        
    }
    return res;
}

int main(){
    int arr[]={1,1,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxlen(arr,n);
    return 0;
}


