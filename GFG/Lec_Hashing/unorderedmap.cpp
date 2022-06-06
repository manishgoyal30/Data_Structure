#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>m;
    
    //2 methods of insertion
    m["gfg"]=20;
    m["ide"]=40;
    m.insert({"manish",25});

    for(auto it=m.begin(); it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    
    //find()
    if(m.find("manish")!=m.end())
    cout<<"found";
    else
    cout<<"not found";
    cout<<endl;

    //count function()
    if(m.count("manish")>0)
    cout<<"found"<<endl;
    else
    cout<<"not found"<<endl;

//erase function()
    cout<<m.size()<<endl;
    m.erase("ide");
    m.erase(m.begin());
    cout<<m.size()<<endl;
    m.erase(m.begin(),m.end());
    cout<<m.size()<<endl;


    return 0;

}