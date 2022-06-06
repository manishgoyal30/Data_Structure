#include<bits/stdc++.h>
using namespace std;

// vector<int> sortbyfre(int arr[],int n)
// {
//     unordered_set<int>h;
//     vector<int>res;

//     for(int i=0;i<n;i++){
//        if(h.count(-arr[i]==1)){
//            res.push_back(-abs(arr[i]));
//            res.push_back(abs(arr[i]));
//        }       
//        h.insert(arr[i]);
//     }
// return res;  
        
// }

vector<int> sortbyfre(int arr[],int n)
{
    unordered_set<int>h;
    vector<int>res;

    for(int i=0;i<n;i++){
       if(arr[i]>0 && h.find(-arr[i])!=h.end()){
           res.push_back(-abs(arr[i]));
           res.push_back(abs(arr[i]));
       }     

       else if(arr[i]<0 && h.find(abs(arr[i]))!=h.end()){
           res.push_back(arr[i]);
           res.push_back(abs(arr[i]));
           }  
       
    }
return res;  
        
}



int main(){
    int arr[]={2,9,4,3,10};     
    int n=sizeof(arr)/sizeof(arr[0]);    
    sortbyfre(arr,n);
    return 0;
}

