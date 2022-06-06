#include<bits/stdc++.h>
using namespace std;

vector<int>linearpro(int hashsize,int arr[], int sizeOfArray){
   
   vector<int>v(hashsize,-1);
   for(int i=0;i<sizeOfArray;i++){

       int key = arr[i]%hashsize;

       if(v[key]==arr[i])
       continue;

       if(v[key]==-1){
           v[i]=arr[i];
       }
       else{
           key=(key+1)%hashsize;
           while(v[key]!=-1){
               if(v[key]==arr[i])
               break;
           }
           else{
               
           }
       }

      
}

int main(){
    int hashsize=6;
    int arr[]={10,20,10,20,30};
    int n=sizeof(arr)/sizeof(arr[0]);
   linearpro(hashsize,arr,n);

    return 0;
}



// class Solution{
//     //Function to fill the array elements into a hash table 
//     //using Linear Probing to handle collisions.
//     int[] linearProbing(int hash_size, int arr[], int sizeOfArray)
//     {
//         //Your code here
//         int[] table = new int[hash_size];
//         Arrays.fill(table, -1);
//         for (int i = 0; i < sizeOfArray; i++){
//             int hash_key = arr[i] % hash_size;
//             if(table[hash_key] == arr[i]) continue;
//             if(table[hash_key] == -1){
//                 table[hash_key] = arr[i];
//             }else{
//                 for(int j = 1; j < hash_size; j++){
//                     if(table[(j + hash_key) % hash_size] == arr[i]) break;
//                     if(table[(j + hash_key) % hash_size] == -1){
//                         table[(j + hash_key) % hash_size] = arr[i];
//                         break;
//                     }
//                 }
//             }
//         }
//         return table;
        
//     }
// }