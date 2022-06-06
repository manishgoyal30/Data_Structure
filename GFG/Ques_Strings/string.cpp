#include <bits/stdc++.h>
using namespace std;

string printstr(string s, int n){
    string result;

    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='c')
        result +='2';
        else if(s[i]>='d'&& s[i]<='f')
        result +='3';
        else if(s[i]>='g'&& s[i]<='i')
        result +='4';
        else if(s[i]>='j'&& s[i]<='l')
        result +='5';
        else if(s[i]>='m'&& s[i]<='o')
        result +='6';
        else if(s[i]>='p'&& s[i]<='s')
        result +='7';
        else if(s[i]>='t'&& s[i]<='v')
        result +='8';
        else
        result +='9';
    }
    return result;
}

int main()
{
   string s;
   getline(cin,s);
   int len=s.length();   
   cout<<printstr(s,len);
   return 0;  
}