#include <iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp[n];
    for(int i=0;i<n;i++){
        a[n-i-1] = temp[i]; 
        temp[i]=a[i];
   }
   for(int i=0;i<n;i++){
        cout<<a[i];
    }
   

    return 0;
}