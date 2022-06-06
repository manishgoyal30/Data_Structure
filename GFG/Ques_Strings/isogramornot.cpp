#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;

bool rotation(string str)
{
      int arr1[256]={0};

      for(int i=0;i<str.length();i++){
          arr1[str[i]]++;        
      }

      for(int i=0;i<str.length();i++){
          if(arr1[str[i]]>1)
          return 0;
        
      }
    return 1;  
}
//     int c=0;
//     unordered_map<char,int>m;
//     for(int i=0;i<str.length();i++){
//         m[str[i]]++;      
//     }  
//     for(auto it:m){
//         if(it.second>1){
//             c=1;
//         }
//         if(c==1)
//         return 0;
//     }
//     return 1;
// }


int main()
{
   string str;
   getline(cin,str);   
   cout<<rotation(str);
   return 0;
  
}