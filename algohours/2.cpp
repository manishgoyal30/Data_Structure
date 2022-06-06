#include <bits/stdc++.h>
using namespace std;

int main()
{	

       int t,k,l,m,n,f,z;
       cin>>t;
       cin>>k;
       cin>>l;
       cin>>m;
       cin>>n;
       cin>>f;
    int count=0;
    for(int i=0;i<t;i++){
        if(i%k==0||i%l==0||i%m==0||i%n==0){
            count++;
        }
    }
    z=t-count;
       
    if(z>=f){
        cout<<z<<" "<<"Staying it izz";
    }
    else{
         cout<<z<<" "<<"Homecoming it izz";
    }


	return 0;
}