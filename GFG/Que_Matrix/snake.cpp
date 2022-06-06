#include <bits/stdc++.h>
using namespace std;

const int n=4;

// void snake(int arr[n][n])
// {
//     for(int)

// }

int main()
{	
	int arr[n][n] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};

    
    for(int i=0;i<n;i++){
        if(i%2==0)
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        else{
           for(int j=n-1;j>=0;j--){
               cout<<arr[i][j]<<" ";
           }
        }
    }


    // for(int i = 0; i < n; i++)
	// {
	// 	for(int j = 0; j < n; j++)
	// 	{
	// 		cout << arr[i][j] << " ";
	// 	}
    // }
	// 	cout << endl;
	return 0;
}