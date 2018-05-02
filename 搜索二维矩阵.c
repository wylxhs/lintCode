class Solution {
public:
    /**
     * @param matrix: matrix, a list of lists of integers
     * @param target: An integer
     * @return: a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        // write your code here
        if(matrix.empty() || matrix[0].empty()){
            return false;
        }
        int row = 0;
        int col = matrix[0].size() - 1;
        while(row < matrix.size() && col > -1){
            if(matrix[row][col] == target){
                return true;
            }else if(matrix[row][col] > target){
                col --;
            }else{
                row ++;
            }
        }
        return false;
    }
};