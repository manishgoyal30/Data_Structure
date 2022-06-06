#include<bits/stdc++.h>
using namespace std;


int countsubarray(int arr[], int n)
{
 
    unordered_map<int,int>s;
    int sum=0,count=0;
    for (int i = 0; i < n; i++)
    {
      if(arr[i]==0)
      arr[i]=-1;
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i]; //ADDIGN THE FRE AND DATA TO MAP
        s[sum]++;
        if(sum==0) //IF SUM=0, THEN ITS SAME OF THE ARRAY
        count+=s[sum];
        else
        count+=s[sum]-1;
    }
    return count;
}



int main(){
    int arr[]={4, 2, 4, 5, 2, 3, 1};     
    int N=sizeof(arr)/sizeof(arr[0]);    
    cout<<countsubarray(arr,N);
    return 0;
}

