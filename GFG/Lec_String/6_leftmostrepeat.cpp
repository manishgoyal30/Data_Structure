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
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=str.length()-1;i>=0;i--){
        if(visited[str[i]])
        res=i;
        else
         visited[str[i]]=true;
    }
    return res;
}

int main(){
   string str;      
   getline(cin,str);   
   cout<<leftmost(str);   
   return 0;

}

