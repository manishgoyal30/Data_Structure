#include<bits/stdc++.h>
using namespace std;

// int intersection(int a[],int b[],int m, int n){
//     int res=0;
//     for(int i=0;i<m;i++){
//         bool flag=false;
//         for(int j=0;j<i;j++){
//             if(a[i]==a[j]){
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag=true)
//         continue;

//         for(int j=0;j<n;j++){
//             if(a[i]==b[i]){
//             res++;
//             break;
//             }           
//         }
//     }
//     return res;
// }

int intersection(int a[],int b[],int m, int n){
    unordered_set<int>s(a,a+m);
    int res=0;
    for(int i=0;i<n;i++){
        if(s.find(b[i])!=s.end()){
            res++;
            s.erase(b[i]);
        }
    }
    return res;
}

int main(){

    int a[]={10,20,10,20,30};
    int b[]={20,10,10,20};
    int m=5;
    int n=4;
    cout<<intersection(a,b,m,n);
    return 0;
}


