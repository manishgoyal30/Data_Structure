#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,w,x,y,z,m;
   cin>>t;
   for(int i=0;i<t;i++){
    cin>>w;
    cin>>x;
    cin>>y;
    cin>>z;
   m = y*z;
   if(w+m>x)
   cout<<"overflow"<<endl;
   else if(w+m==x)
   cout<<"filled"<<endl;
   else
   cout<<"unfilled"<<endl;
   }
}
