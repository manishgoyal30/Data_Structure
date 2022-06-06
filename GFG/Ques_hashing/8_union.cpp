#include<bits/stdc++.h>
using namespace std;

int countNonRepeated(int a[], int b[],int m, int n)
    {
        unordered_set<int>h;
        for(int i=0;i<n;i++){
            h.insert(a[i]);
        }    
        int res=0;
        for(int j=0;j<m;j++){
            if(h.find(b[j])!=h.end()){
            res++;
            h.erase(b[j]);           
         }
           
        }   
        return res;
        
    }

int main(){
    int a[]={89,24,75,11,23};
    int b[]={89,2,4};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    cout<<countNonRepeated(a,b,m,n);
    return 0;
}
