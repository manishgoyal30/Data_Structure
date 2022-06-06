#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int n)
    {
       unordered_set<int> h;
       int cur_sum=0;       
        for (int i=0;i<n;i++){                    
            cur_sum=cur_sum+arr[i];
            if(cur_sum==0)
            return true;
            if(h.find(cur_sum)!=h.end())
            return true;
            else
            h.insert(cur_sum);
                
        }
        return false;
}   


int main(){
    int arr[]={4, 2, -3, 1, 6};     
    int n=sizeof(arr)/sizeof(arr[0]);    
    cout<<check(arr,n);
    return 0;
}

