class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int maximum = nums[0];

        int currMax = nums[0];
        for (int i=1; i<n; i++) {
            if (nums[i-1] < nums[i]) {
                currMax += nums[i];
                maximum = max(maximum, currMax);
            } else {
                currMax = nums[i];
            }
        }
        return maximum;
    }
};