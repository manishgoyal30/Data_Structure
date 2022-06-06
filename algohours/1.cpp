#include <bits/stdc++.h>
using namespace std;

int main()
{	
   int t;
   cin>>t;   
   while(t--){
       int n;
       cin>>n;
       string str;
       
       cin>>str;
       
       
       int counta=0,countb=0;
       for(int i=0;i<n;i++){
           if(str[i]=='A')
           counta++;
           else if(str[i]=='B')
           countb++;           
       }

       if(counta>countb){
           cout<<'A';
       }
       else if(countb>counta){
           cout<<'B';
       }

   }
	return 0;
}


