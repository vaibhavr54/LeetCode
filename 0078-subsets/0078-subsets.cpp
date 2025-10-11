class Solution {
public:

    void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& subsets) {
        if (i==nums.size()) {
            subsets.push_back({ans});
            return;
        }
        // include and print
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i+1, subsets);
        // exclude and print
        ans.pop_back();
        getAllSubsets(nums, ans, i+1, subsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> subsets;
        getAllSubsets(nums, ans, 0, subsets);

        return subsets;
    }
};