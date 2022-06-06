#include <bits/stdc++.h>
using namespace std;

const int r=4;
const int c=4;


void exchange(int matrix[r][c])
{

    int i=0,j=c-1;
    
    while(i<r && j>=0){
        if(matrix[i][j]==x){
            cout<<i<<" "<<j<<" ";
            return;
        }
        else if(matrix[i][j]>x){
            j--;
        }
        else{
            i++;
        }
        cout<<"Not Found"
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