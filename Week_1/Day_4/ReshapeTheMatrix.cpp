class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> matrix(r , vector<int>(c));
        int row = mat.size() , col = mat[0].size();
        int k = 0 ;
        if(row * col != r * c){
                    return mat;
                }
        for(int i =0 ; i < row ; i++){
            for(int j =0 ; j < col ; j++){
                int newRow = k/c , newCol = k % c;
                matrix[newRow][newCol] = mat[i][j];
                k++ ; 
            }
        }
        return matrix ;
    }
};
