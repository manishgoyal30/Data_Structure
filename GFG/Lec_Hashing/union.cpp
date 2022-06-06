#include<bits/stdc++.h>
using namespace std;


int unionSize(int a[],int b[],int m, int n){    
    unordered_set<int>s;

    for(int i=0;i<m;i++)
    s.insert(a[i]);
    for(int i=0;i<n;i++)
    s.insert(b[i]);  

    return s.size();
}

int main(){

    int a[]={2,8,3,5,6};
    int b[]={4,8,3,6,1};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);

    cout<<unionSize(a,b,m,n);
    return 0;
}


