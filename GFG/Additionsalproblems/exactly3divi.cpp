#include <bits/stdc++.h>
using namespace std;
bool isPrime(int N){
    if(N==1)
    return false;
    if(N==2 || N==3)
    return true;
    if(N%2==0 || N%3==0)
    return false;
    for(int i=0;i*i<=N;i=i+6){
        if(N%i==0 || N%(i+2)==0)
        return false;
    return true;
    }
}

int exactly3Div(int N)
{
    int count=0;
    for(int i=2;i*i<=N;i++){
    if(isPrime(i)){
        if(i*i<=N)
        count++;        
    }
}
    return count;
}



int main()
{
   int n;
   cin>>n;
   for(int i=0;i*i<n;i++){
       if()
   }
   

}