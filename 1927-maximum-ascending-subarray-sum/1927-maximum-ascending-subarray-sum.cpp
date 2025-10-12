class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size(), currSum = nums[0];
        int maxSum = 0;
        for (int i=1; i<n; i++) {
            maxSum = max(maxSum, currSum);
            if (nums[i] > nums[i-1]) {
                currSum += nums[i];
            } else {
                currSum = nums[i];
             }
        }
        return max(maxSum, currSum);
    }
};