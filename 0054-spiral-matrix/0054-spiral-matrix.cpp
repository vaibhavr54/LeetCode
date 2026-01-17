class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int strow=0, stcol=0, endrow=m-1, endcol=n-1;
        vector<int> ans;
        
        while (strow<=endrow && stcol<=endcol) {
            //top boundary
            for (int i=stcol; i<=endcol; i++) {
                ans.push_back(matrix[strow][i]);
            }
            //right boundary
            for (int i=strow+1; i<=endrow; i++) {
                ans.push_back(matrix[i][endcol]);
            }
            //bottom boundary
            for (int i=endcol-1; i>=stcol; i--) {
                if (strow == endrow) break;
                ans.push_back(matrix[endrow][i]);
            }
            //left boundary
            for (int i=endrow-1; i>strow; i--) {
                if (stcol == endcol) break;
                ans.push_back(matrix[i][stcol]);
            }
            strow++, stcol++, endrow--, endcol--;
        }
        return ans;
    }
};