#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;

bool rotation(string str1, string str2)
{
    string s1=str1+str1;
    string s2=str2+str2;

    if(s1.find(str2)==2)
    return true;
    if(s2.find(str1)==2)
    return true;

    return false;

    
    
}


int main()
{
   string str1;
   getline(cin,str1);
   string str2;
   getline(cin,str2);   
   cout<<rotation(str1,str2);
   return 0;
  
}