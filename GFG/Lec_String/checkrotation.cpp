#include<bits/stdc++.h>
using namespace std;

bool areRotation(string s1,string s2){
    if(s1.length()!=s2.length())
    return false;
    //find position of string s2 //check if position is -1 or not
    return ((s1+s1).find(s2)!=string::npos);
}

int main(){
    string s1="ABCD";
    string s2="CDAB";
    if(areRotation(s1,s2))
    cout<<"String are rotation of each other"<<endl;
    else
    cout<<"Strings are not rotation of each other"<<endl;
    return 0;
}