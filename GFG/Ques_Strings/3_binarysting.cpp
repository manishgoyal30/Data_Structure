#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;

bool strstr(string a, string b)
{
    if(a.length()!=b.length())
    return false;
    int count[CHAR]={0};

    for(int i=0;i<a.length();i++){
        count[a[i]]++;
        count[b[i]]--;
    }

    for(int i=0;i<CHAR;i++){
        if(count[i]!=0)
        return false;
        return true;
    }
    
}


int main()
{
   string s;
   getline(cin,s);
   string x;
   getline(cin,x);   
   cout<<strstr(s,x);
   return 0;
  
}