// #include <bits/stdc++.h>
// using namespace std;
// const int m=2;
// const int n=4;
// void printSnake(int arr[m][n]){
//     for(int i=0;i<m;i++){
//         if(i==0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<< " "; 
//             }
//         }
//         if(i==n-1){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<< " "; 
//             }
//         }

//         else{
//             for(int j=0;j<n;j++){
//                 if(j==0||j==n-1)
//                 cout<<arr[i][j]<< " "; 
//             }
//         }
        
        
//     }
// }

// int main()
// {
//     // int arr[m][n] = {{1,2,3,4},
//     //                  {5,6,7,8},
//     //                  {9,10,11,12},
//     //                  {13,14,15,16}};
//      int arr[m][n] = {{1,2,3,4},
//                      {5,6,7,8}};
                    

//    printSnake(arr);
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

const int R = 4, C = 4;

void bTraversal(int mat[R][C])
{
	if(R == 1)
	{
		for(int i = 0; i < C; i++)
			cout << mat[0][i] << " ";
	}
	else if(C == 1)
	{
		for(int i = 0; i < R; i++)
			cout << mat[i][0] << " ";
	}
	else
	{
		for(int i = 0; i < C; i++)   
			cout << mat[0][i] << " ";  //1 2 3 4
		for(int i = 1; i < R; i++)
			cout << mat[i][C - 1] << " ";  //8 2 16
		for(int i = C - 2; i >= 0; i--)
			cout << mat[R - 1][i] << " ";  //15 14 13
		for(int i = R - 2; i >= 1; i--)
			cout << mat[i][0] << " ";  //3 9 5
	}

}

int main()
{	
	int arr[R][C] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};

    bTraversal(arr);

	return 0;
}