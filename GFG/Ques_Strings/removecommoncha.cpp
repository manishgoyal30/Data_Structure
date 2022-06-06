#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;

// string rotation(string s1, string s2)
// {
//     int arr[256]={0}; 
//     int n=s1.length();
//     int m=s2.length();
//     string s=s1+s2;
//     for(int i=0;i<n+m;i++){
//         arr[s[i]]++;
//     }  

//     for(int i=0;i<n;i++){
//         if(arr[s[i]]>1){
//             s.erase(s[i]);
//         }
        
//     }

//     return s;

// }


string rotation(string s1, string s2)
{
    string res = "";
    unordered_map<char,int>m;

    for(int i=0;i<s2.size();i++)
    m[s2[i]]=1;

  for(int i=0;i<s1.length();i++){
        if(m.find(s1[i])==m.end())
        res=res+s1[i];
        else
        m[s1[i]]=2;
    }

    for(int i=0;i<s2.size();i++){
        if(m[s2[i]]==1)
        res=res+s2[i];
    }

    
    if(res.size()==0)
    return "-1";

    return res;


}


int main()
{
   string s1;
   getline(cin,s1);
   string s2;
   getline(cin,s2);
   cout<<rotation(s1,s2);
   return 01;
  
}

