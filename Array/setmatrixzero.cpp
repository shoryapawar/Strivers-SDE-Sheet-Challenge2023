class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int n , m;
      n=matrix.size();
      m=matrix[0].size();

       // intializing matrix row and col to zero
       vector<int>row(n,0);
       vector<int>col(m,0);
   
   // first iterate
   for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(matrix[i][j]==0){    // martking col and row as one if single zero occurs
                row[i]=1;
                col[j]=1;
            }
        }
    }
    



    // marking all non zeros as zeros if there row and col is marked
    for(int i = 0 ; i < n ; i++)
    { 
        for(int j =0 ; j< m ; j++){
        if(row[i]||col[j]){
            matrix[i][j]=0;
        }
    }

    }
    }
};