#include <bits/stdc++.h>
using namespace std;
const int CHAR=256;

// void reverse(string str,int low, int high){
//     while(low<=high){
//         swap(str[low],str[high]);
//         low++;
//         high--;
//     }
// }

string revstring(string S){
   reverse(S.begin(),S.end());
   int i=0,j=0;
   while(j<S.length()){
       if(S[j]=='.'){
           reverse(S.begin()+i,S.begin()+j);
           j++;
           i=j;
       }
       j++;
   }
   reverse(S.begin()+i,S.end());
   return S;
}

int main()
{
   string S;
   getline(cin,S);
   int len=S.length();   
   cout<<revstring(S);
   return 0;  
}