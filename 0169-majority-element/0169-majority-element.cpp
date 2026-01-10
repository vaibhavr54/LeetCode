class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.rbegin(), nums.rend());
        // return nums[nums.size()/2];

        int freq = 0, ans = 0;
        for (int num : nums) {
            if (freq == 0) {
                ans = num;
            } 
            if (num == ans) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};