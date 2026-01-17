class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int r = 0, col = n-1;

        while (r<m && col>=0) {
            if (target == matrix[r][col]) {
                return true;
            } else if (target < matrix[r][col]) {
                col--;
            } else {
                r++;
            }
        }
        return false;
    }
};