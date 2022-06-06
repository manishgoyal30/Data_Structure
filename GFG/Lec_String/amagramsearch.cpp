#include <bits/stdc++.h>
using namespace std;

bool areAnagram(string &pattern, string &text, int i){
    int count[CHAR]={0}
}

bool isPresent(string &text, string &pattern){
    int n=text.length();
    int m=pattern.length();
    for(int i=0;i<n-m;i++){
        if(areAnagram(pattern,text,i))
        return true;
    }
    return false;
}

int main()
{
   string pattern;
   getline(cin,pattern);
   string text;
   getline(cin,text);   
   cout<<search(pattern, text);
   return 0;   
}