#include<bits/stdc++.h>
using namespace std;

void patsearch(string &txt, string &pat){
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=(n-m);i++){  //comparing 1st 4 elements
        int j;
        for(j=0;j<m;j++)
        if(pat[j]!=txt[i+j])  //comparing pat elements now
        break;

        if(j==m)
        cout<<i<<" ";
    }
}


int main(){
   string txt="ABCABCD";
   string pat="ABCD";
   cout<<"All the index numbers where pattern found:"<<" ";
   patsearch(txt,pat);
   return 0; 
}

