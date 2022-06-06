#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;

char rotation(string str)
{
     int arr[26]={0};
  
    for(int i=0;i<str.length();i++){
          arr[str[i]-'a']++;          
      }
      char a;

    int maximum=-1,index=0;
    for(int i=0;i<26;i++)
    {
          if(arr[i]>maximum){
              index=i;
              maximum=arr[i];
          }
          
    }

    a=index+'a';
    return a;   
      

}


int main()
{
   string str;
   getline(cin,str);
   cout<<rotation(str);
   return 0;
  
}

