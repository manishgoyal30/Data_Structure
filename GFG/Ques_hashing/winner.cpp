#include<bits/stdc++.h>
using namespace std;

vector<string>winner(string arr[],int n)
    {
       vector<string>v;
       unordered_map<string,int> h;       
       string s;

        for (int i=0;i<n;i++){ 
             h[arr[i]]++;                  
        }

        int max=0;
        for(auto x:h)
        {
            if(max < x.second){
                max=x.second;
                s=x.first;
            }
    }
    v.push_back(s);
    v.push_back(to_string(max));
    return v;    

}   


// vector<string>v;
//        map<string,int>mp;
//        string s;
//        for(int i=0;i<n;i++)
//        {
//            mp[arr[i]]++;
//        }
//        int max = 0;
//        for(auto x : mp)
//        {
//            if(max < x.second)
//            {
//                max = x.second;
//                s = x.first;
//            }
//        }
//        v.push_back(s);
//        v.push_back(to_string(max));
//        return v;

int main(){
    string arr[]={"john","johnny","jackie","johnny","john","jackie","jamie","jamie","john","johnny","jamie","johnny","john"};     
    int n=sizeof(arr)/sizeof(arr[0]);    
    winner(arr,n);
    return 0;
}

