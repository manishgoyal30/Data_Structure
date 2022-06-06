#include <bits/stdc++.h>
using namespace std;

const int r=4;
const int c=4;


void exchange(int matrix[r][c])
{
  int top=0,bottom=r-1,left=0,right=c-1;
  
  while(top <= bottom && left <= right){

      for(int i=left;i<=right;i++)
      cout<<matrix[top][i]<<" ";
      top++;
  

  for(int i=top;i<=bottom;i++)
      cout<<matrix[i][right]<<" ";
      right--;
  

if(top<=bottom){
    for(int i=right;i>=left;i--)
      cout<<matrix[bottom][i]<<" ";
      bottom--;
}

if(left<=right){
    for(int i=bottom;i>=top;i--)
      cout<<matrix[i][left]<<" ";
      left++;
  
}


}

  }
  
  
    


int main()
{	

	int matrix[r][c] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};

    exchange(matrix);

    // for(int i = 0; i < r; i++)
	// {
	// 	for(int j = 0; j < c; j++)
	// 	{
	// 		cout << matrix[i][j] << " ";
	// 	}
    // }
	// 	cout << endl;
	return 0;
}