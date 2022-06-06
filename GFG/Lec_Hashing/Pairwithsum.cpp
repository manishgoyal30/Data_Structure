#include<bits/stdc++.h>
using namespace std;


bool isPair(int a[],int n, int X){
    unordered_set<int> h;

    for(int i=0;i<n;i++)
    {
        if(h.find(X-a[i])!=h.end())
        return 1;
        else
        h.insert(a[i]);
    }
    return 0;
    }


int main(){

    int a[]={3,8,4,7,6,1};
    int n=sizeof(a)/sizeof(a[0]);
    int X=14;

    cout<<isPair(a,n,X);
    return 0;
}


