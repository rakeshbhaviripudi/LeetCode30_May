class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        
        int submatrices_with_all_ones =0;
        vector<vector<int>>dp(rows,vector<int>(columns, 0));
        
        for(int i =0; i<rows ; i++){
            for(int j=0;j<columns; j++){
                if(i ==0 || j == 0 && matrix[i][j] == 1)
                    dp[i][j] = matrix[i][j];
                    
                else if(matrix[i][j] == 1)
                    dp[i][j] = 1+ min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                
                submatrices_with_all_ones += dp[i][j]; 
            }
        }
    return submatrices_with_all_ones;
    }
};
