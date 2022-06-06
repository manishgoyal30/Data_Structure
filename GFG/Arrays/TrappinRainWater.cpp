// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int n,x;
//    cin>>n;
//    int arr[n];
//    int res = 0;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }  
//    for(int i=1;i<n-1;i++){       
//        int lmax=arr[i], rmax=arr[i];       
//        for(int j=0;j<i;j++)
//        lmax= max(lmax,arr[j]);
       
//        for(int j=i+1;j<n;j++)
//        rmax= max(rmax,arr[j]);
//        res = res + (min(rmax,lmax)-arr[i]);
//    }
//    cout<<res;
//    return 0;

// }


#include <bits/stdc++.h>
using namespace std;

int getWater(int arr[], int n)
{
	int res = 0;

	for(int i = 1; i < n - 1; i++)
	{
		int res = 0;

    	int lMax[n];
    	int rMax[n];

    	lMax[0] = arr[0];
    	for(int i = 1; i < n; i++)
    		lMax[i] = max(arr[i], lMax[i - 1]);


    	rMax[n - 1] = arr[n - 1];
    	for(int i = n - 2; i >= 0; i--)
    		rMax[i] = max(arr[i], rMax[i + 1]);

    	for(int i = 1; i < n - 1; i++)
    		res = res + (min(lMax[i], rMax[i]) - arr[i]);
    	
    	return res;
	}

	return res;
}

int main()
{
   int n,x;
   cin>>n;
   int arr[n];
   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }       
   cout<<getWater(arr,n);
   return 0;

}







