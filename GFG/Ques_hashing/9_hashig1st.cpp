#include<bits/stdc++.h>
using namespace std;

int countNonRepeated(int arr[],int N, int sum)
    {
        unordered_set<int>h;
        int cur_sum=0;
        for(int i=0;i<N;i++){           
            if(h.find(sum-arr[i])!=h.end())
                return true;
                else
                h.insert(arr[i]);
            }
            return false;
        }
        
        
    


int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    
    int N=sizeof(arr)/sizeof(arr[0]);
    int sum=14;
    cout<<countNonRepeated(arr,N,sum);
    return 0;
}
