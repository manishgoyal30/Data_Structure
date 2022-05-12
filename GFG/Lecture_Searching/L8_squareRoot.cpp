#include <bits/stdc++.h>
using namespace std;

int squareRoot(int x){
    int low =1, high=x,ans;

    while(low<=high){
    int mid = (low+high)/2;
    int mSq=mid*mid;  
    if(mid==x){
        return mid;
    }       
    else if(mSq>x){
        high=mid-1;
    }
    else{
        low = mid+1;
        ans=mid;
    }     
    }
    return ans;
}

int main()
{
   int x;
   cin>>x; 
   cout<<squareRoot(x);  
   return 0;

    
}

