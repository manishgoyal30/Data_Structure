
        int mid = (low+high)/2;
        
        long long int ans=-1;
        if(arr[mid]==K)
        return mid;

        if(arr[mid]>K)
        high=mid-1;

        else{
            ans=mid;
            low = mid+1;
