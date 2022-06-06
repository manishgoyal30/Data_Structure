#include<bits/stdc++.h>
using namespace std;


//Naive code with 0(n*m)

/*void intersect(int a[], int b[], int m, int n){
    for(int i=0;i<m;i++){
        if(i>0 && a[i]==a[i-1])
        continue; //will move to new iteration
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
   }
*/

void intersect(int a[], int b[], int m, int n){
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        continue;
        if(a[i]<b[i])
        i++;
        else if(b[i]<a[i])
        j++;
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    
   }

   

int main()
{
   int m,n;
   cin>>m;
   cin>>n;  
   int a[m];
   for(int i=0;i<m;i++){
       cin>>a[i];
   }
   int b[n];
    for(int i=0;i<n;i++){
       cin>>b[i];
   }    
   intersect(a,b,m,n);
}
