#include <bits/stdc++.h>

vector< long long int> genrateRow(int row){
   long long ans=1;
  vector<long long int> ansrow ;
  ansrow.push_back(1);
  for(int col = 1 ;col<row ; col++){
    ans = ans*(row-col);
    ans=ans/(col);
    ansrow.push_back(ans);
  }
  return ansrow;

}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> ans;
    for(int i = 1 ; i <=n ; i++)
    ans.push_back(genrateRow(i));

    return ans;
}
