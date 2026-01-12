class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map <int, int> mp;
        for (int i=0; i<n; i++) {
            int rem = target - nums[i];
            if (mp.count(rem)) {
                ans.push_back(mp[rem]+1);
                ans.push_back(i+1);
                break;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};