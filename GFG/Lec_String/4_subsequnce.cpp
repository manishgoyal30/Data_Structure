#include<bits/stdc++.h>
using namespace std;

bool isSubseq(string str1, string str2){
int n=str1.length();
int m=str2.length();
if(n<m)
return false;
int j=0;
for(int i=0;i<n;i++){
    if(str1[i]==str2[j])
    j++;
}
    return(j==m);  
}

int main(){
   string str1;
   string str2;   
   getline(cin,str1);
   getline(cin,str2);
   cout<<isSubseq(str1,str2);   
   return 0;

}

