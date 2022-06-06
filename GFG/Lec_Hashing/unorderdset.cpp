#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set <int> s;

    //insert() function
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(15);  //if 15 is already present it wont store again that operation will be terminated

    for(int x: s)
    cout<<x<<" ";
    cout<<endl;  

    //begin() points to very first element of the containe
    //end() point to the next to end element of the function
    for(auto it=s.begin(); it!=s.end();it++){
        cout<<(*it)<<endl;
    }
    cout<<s.size()<<endl;

    //if element is not there or equals to rhe s.end() then its not found otherwise found
    if(s.find(15)==s.end())
    cout<<"not found"<<endl;
    else
    cout<<"found"<<(*s.find(15))<<endl;

    //s.count function
    if(s.count(15)>0)
    cout<<"found"<<endl;
    else
    cout<<"not found"<<endl;

    //clear() function
    s.clear();
    cout<<s.size()<<endl;

    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    //erase() functio
    s.erase(15);
    cout<<s.size()<<endl;

    auto it = s.find(10);
    s.erase(it);
    cout<<s.size()<<endl;

    s.insert(10);
    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;
    return 0;
    
}