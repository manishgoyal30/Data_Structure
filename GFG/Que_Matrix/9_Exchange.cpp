#include <bits/stdc++.h>
using namespace std;

const int r=4;
const int c=4;


void exchange(int matrix[r][c])
{
    // // int r = martix.sixe();
    // int c = matrix[0].size();

    // for(int i=0;i<r/2;i++){
    //     for(int j=0;j<c;j++){         
    //        swap(matrix[i][j],matrix[i][r-1-j]);
    //     }
    // }

        int low = 0;
        int high =r-1;
        while(low<high){
            for(int i = 0;i<c;i++){
                swap(matrix[low][i],matrix[high][i]);
            }
            low++;
            high--;
        }
    
}

int main()
{	

	int matrix[r][c] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};

    exchange(matrix);

    for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cout << matrix[i][j] << " ";
		}
    }
		cout << endl;
	return 0;
}