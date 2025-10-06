class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();
        // for (int val : nums) {
        //     int freq = 0;
        //     for (int ele : nums) {
        //         if (ele == val) {
        //             freq++;
        //         }
        //     }
        //     if (freq > n/2) {
        //         return val;
        //     }
        // }
        // return -1;

        
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // int freq = 1, ans = nums[0];
        // for (int i=1; i<n; i++) {
        //     if (nums[i] == nums[i-1]) {
        //         freq++;
        //     } else {
        //         freq = 1;
        //         ans = nums[i];
        //     }
        //     if (freq > n/2) {
        //         return ans;
        //     }
        // }

        int freq = 0, ans = 0;
        for (int i=0; i<nums.size(); i++) {
            if (freq == 0) {
                ans = nums[i];
            }
            if (nums[i] == ans) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;

        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // return (nums[n/2]);
    }
};