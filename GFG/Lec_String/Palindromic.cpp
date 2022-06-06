#include<bits/stdc++.h>
using namespace std;

bool isPal(string str){
//    int begin=0;
//    int end=str.length()-1;
int n=str.length();

       for(int i=0;i<n;i++){
       if(str[i]!=str[n-i-1])
       return false;     
   
}
return true;
}

int main(){
   string str;   
   getline(cin,str);
   cout<<isPal(str);   
   return 0;

}

