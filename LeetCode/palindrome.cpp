#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,c,rem,rev=0;
   cin>>n;

  while(n!=0){
  rem = n%10;
  rev=rev*10+rem;
   n = n/10;
  }

if(n==rev){
    cout<<"true"<<endl;
}
else{
    cout<<"False"<<endl;
}
   
   
    return 0;
}