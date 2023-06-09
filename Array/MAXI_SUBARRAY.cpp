#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum =0 , maxi = LONG_MIN;

    for(int i =0 ; i<n ; i++){
        //adding sum
        sum+=arr[i];
         if(sum>maxi){
             maxi=sum;
         } 

        
        //don't carry negative sum
        if(sum<0) sum=0;
    }
    //if maximum sum <0 so return 0
    if(maxi<0) return 0;
    return maxi;
}