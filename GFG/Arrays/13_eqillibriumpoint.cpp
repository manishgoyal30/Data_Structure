//nahi hua

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

     int lsum[n], rsum[n];

     lsum[0]=a[0];
     for(int i=1; i<n; i++){
        lsum[i]=lsum[i-1]+a[i];
     }
     
     rsum[n-1]=a[n-1];
     for(int i=n-2; i>=0; i--){
        rsum[i]=rsum[i+1]+a[i];
     }
     
     for(int i=0; i<n; i++){
        if(lsum[i]==rsum[i]){
           return i+1;
        }
     }
     return -1;
}