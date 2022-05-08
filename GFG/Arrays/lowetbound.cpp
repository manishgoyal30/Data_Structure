#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::vector<int>v;
    int size,a,q,b,it;
        
    cin>>size;
 
   for(int i=0;i<size;i++){
       cin>>a;
       v.push_back(a);
   }
   
   cin>>q;
   for(int i=0;i<q;i++){
       cin>>a;

       vector<int>::iterator low = lower_bound(v.begin(),v.end(),a);
             
       if(v[low-v.begin()]==a)
            cout<<"Yes "<<(low-v.begin()+1)<<endl;
       else
        cout<<"No "<<(low - v.begin()+1)<<endl;
       
   }
    return 0;
}