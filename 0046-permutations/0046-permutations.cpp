class Solution {
public:
    void getPermute(vector<int>& nums, vector<vector<int>>& ans, int idx) {
        if (idx==nums.size()) {
            ans.push_back({nums});
            return;
        }
        for(int i=idx; i<nums.size(); i++) {
            swap(nums[i], nums[idx]);
            getPermute(nums, ans, idx+1);
            swap(nums[i], nums[idx]); //backtracking step
        }
    }
 
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPermute(nums, ans, 0);
        return ans;
    }
};