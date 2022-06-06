
//first method to create a matrix(2-D array)
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int arr[3][2] = {{10, 20},{30,40},{50,60}};
     
//    for(int i=0;i<3;i++){
//        for(int j=0;j<2;j++){
//        cout<<arr[i][j]<<" ";
       
       
//    } 
//    return 0;
// }
/*Created matrix {{10,20},
                  {20,30},
                  {20,30},}*/



/***************************************************/
//second method to create a matrix(2-D array)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int m, n;
//   cin>>m;  //rows
//   cin>>n;  //columns
//   int arr[m][n];

//   for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//        arr[i][j]=i+j; 
//        }      
//    }  
     
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//        cout<<arr[i][j]<<" ";  
//        //0+0,0+1,1+0,1+1,2+0,2+1
//        }       
//    } 

//    return 0;
// }

/*Created matrix {{0,1},
                  {1,2},
                  {2,3},}*/



/***************************************************/
//third method to create a matrix(2-D array)

// #include <bits/stdc++.h>
// using namespace std;

// void print(int **arr, int m, int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }
// int main()
// {
//     int **arr;
//     int m, n;
//     cin>>m;
//     cin>>n;
//     arr = new int*[m];

//     for(int i=0;i<m;i++){
//         arr[i]= new int[n];
//         for(int j=0;j<n;j++){
//             arr[i][j]=i;
//             cout<<arr[i][j]<<" ";
//         }
//         return 0;
//     }     
// }

#include <bits/stdc++.h>
using namespace std;

void print(int *arr[], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
int main()
{
    int m, n;   
    cin>>m;
    cin>>n;
    int *arr[m];
    

    for(int i=0;i<m;i++){
        arr[i]= new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=i;
            cout<<arr[i][j]<<" ";
        }
        
    }     
    return 0;
}

