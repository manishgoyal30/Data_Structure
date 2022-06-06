#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;

bool rotation(string str1, string str2)
{
      int arr1[256]={0};
      int arr2[256]={0};

      if(str1.length()!=str2.length()){
          return false;
      }

      for(int i=0;i<str1.length();i++){
          arr1[str1[i]]++;
          arr2[str2[i]]++;
      }

      for(int i=0;i<str1.length();i++){
          if(arr1[str1[i]]==arr2[str2[i]]){
              continue;
          }
          else{
              return false;
          }
      }
    return true;    
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