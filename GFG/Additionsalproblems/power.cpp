#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int rev_num;
   while(n>0){
       rev_num=rev_num*10+n%10;
       n=n/10;
   }
   int x=pow(n,rev_num);
   
}