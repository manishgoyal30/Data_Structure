#include <bits/stdc++.h>
using namespace std;

const int n,m;

void transpose(int arr[n][m])
{
    for(int i=0;i<n;i++){
        int low =0, high=n-1;
        while(low<high){
            swap(arr[low][i], arr[high][i]);
            low++;
            high--;
        }
    }
}

int main()
{	
	int arr[n][m] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};

    transpose(arr);

    for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
    }
		cout << endl;
	return 0;
}