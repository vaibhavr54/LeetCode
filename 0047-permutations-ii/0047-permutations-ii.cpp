class Solution {
public:
    void getPermute(vector<int>& nums, vector<vector<int>>& ans, int idx) {
        if (idx==nums.size()) {
            ans.push_back({nums});
            return;
        }
        unordered_set<int> seen;
        for (int i=idx; i<nums.size(); i++) {
            if (seen.count(nums[i])) continue;
            seen.insert(nums[i]);

            swap(nums[i], nums[idx]);
            getPermute(nums, ans, idx+1);
            swap(nums[i], nums[idx]); //backtrack
        }

    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        getPermute(nums, ans, 0);
        return ans;
    }
};