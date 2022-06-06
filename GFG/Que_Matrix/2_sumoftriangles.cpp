#include <bits/stdc++.h>
using namespace std;

const int n=4;

// void transpose(int arr[n][n])
// {
//     int sum=0;
// 	for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             sum = sum+arr[i][j];
//         }
//     }

    

// }

int main()
{	
	int arr[n][n] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};


    int lowersum=0,uppersum=0;
	for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            lowersum+= arr[i][j];        
        }
    }
    cout<<lowersum<<endl;

    for(int i=n-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            uppersum+= arr[i][j];        
        }
    }		
    cout<<uppersum;
    
	return 0;
}