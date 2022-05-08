//nahi hua

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> a;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }   
   vector<int>v;
   for(int i=0;i<n;i++){
       int f=0;
       for(int j=i+1;j<n;j++){
           if(a[i]<=a[j]){
               f=1;
               break;
           }           
       }
       if(f==0){
           v.push_back(a[i]);
         }
         for(int i=0;i<v.size();i++){
       cout<<v[i];
   }
   }
    return 0;
}