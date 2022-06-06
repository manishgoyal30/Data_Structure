#include<bits/stdc++.h>
using namespace std;

int countNonRepeated(int arr[], int n)
    {
        unordered_map<int, int>h;
       
        for(int i=0;i<n;i++){
            h[arr[i]]++;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(h[arr[i]]>1)
            return (i+1);           
        }
        return -1;
    }

int main(){
    int arr[]={9,4,9,6,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countNonRepeated(arr,n);
    return 0;
}
