class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> ans;
        int a,b;
        int actSum = 0, expSum = 0;
        unordered_set<int> set;
        
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (set.count(grid[i][j])) {
                    a = grid[i][j];
                    ans.push_back(a);
                }
                actSum += grid[i][j];
                set.insert(grid[i][j]);
            }
        }
        expSum = (n*n) * (n*n + 1) / 2;
        b = expSum-actSum+a;
        ans.push_back(b);

        return ans;
    }
};