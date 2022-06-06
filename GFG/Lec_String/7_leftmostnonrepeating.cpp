#include<bits/stdc++.h>
using namespace std;

// const int CHAR=256;
// int leftmost(string &str){
//     int count=0;

//     for(int i=0;i<str.length();i++){
//         count[str[i]]++;
//     }
    
//     for(int i=0;i<str.length();i++){
//         if(count>1)
//         return i;
//     }
//     return -1;

// }

const int CHAR=256;

int leftmost(string &str){
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]]==1)
        return i;
    }
    return -1;
}

int main(){
   string str;      
   getline(cin,str);   
   cout<<leftmost(str);   
   return 0;

}

