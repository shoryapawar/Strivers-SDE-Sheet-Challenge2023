#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxProfit=0;
    int minimum = prices[0];
    for(int i = 0 ; i < prices.size();i++){
      int cost = prices[i]-minimum;
        maxProfit = max(maxProfit , cost);
        minimum = min(minimum,prices[i]);
    }
    return maxProfit;
}