#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int ind =-1;
  
    //finding the breaking point 
    for( int i = n-2 ; i >=0 ; i--){
        if(permutation[i]<permutation[i+1]){
            // index i is the break point
            ind=i;
            break;
        }
    }

    // If such a break-point does not exist i.e. if the array is sorted in decreasing order
    if(ind==-1){
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }

    // Find the smallest number i.e. > arr[i] and in the right half of index i 
    // swap it with arr[i].
    for(int i = n-1 ; i > ind ; i--){
        if(permutation[i]>permutation[ind]){
            swap(permutation[i],permutation[ind]);
            break;
        }
    }
  
  // Reverse the entire right half(i.e. from index i+1 to n-1) of index i
    reverse(permutation.begin()+ind+1 , permutation.end());
    return permutation;
    
}