#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,max,max2;  
   cin>>n; 
   vector<int> v;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   } 
   sort(a, a+n);  
   for(int i=n-2;i>=0;i--){
       max=a[n-1];    
       if(a[i]!=a[n-1]) {
            max2=a[i]; 
            break;           
       }                          
   } 
//    cout<<max<<endl;
//    cout<<max2<<endl;

  v.push_back(max);
  v.push_back(max2);
  cout << v<<endl;

}
