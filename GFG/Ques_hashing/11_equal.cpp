#include<bits/stdc++.h>
using namespace std;

bool check(int A[], int B[],int N)
    {
        unordered_map<int,int>h;
        for(int i=0;i<N;i++){
            h[A[i]]++;
        }
        for(int i=0;i<N;i++){
            h[B[i]]--;
        }
        for(auto i:h){
            if(i.second!=0)
            return false;
        }
        return true;
    }
        
      
        
    


int main(){
    int A[]={1,2,5,4,0};  
    int B[]={2,4,5,0,1};
    int N=sizeof(A)/sizeof(A[0]);    
    check(A,B,N);
    return 0;
}

// 9
// 3 5 6 6 2 8 2 12 16
// 12 8 5 16 10 19 6 2 3
