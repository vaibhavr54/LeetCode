class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> runningSum(n, 0);
        // int currSum = nums[0];
        // runningSum[0] = currSum;

        // for (int i=1; i<n; i++) {
        //     currSum += nums[i];
        //     runningSum[i] = currSum;
        // }
        // return runningSum;

        int n = nums.size();
        for (int i=1; i<n; i++) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
};