class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int lb = 0, rb = 0;
        long long sum = 0;
        int minLen = INT_MAX;
        while (rb<n) {
            sum += nums[rb];
            while (sum >= target) {
                minLen = min(minLen, rb-lb+1);
                sum -= nums[lb];
                lb++;
            }
            rb++;
        }
        return (minLen == INT_MAX ? 0 : minLen);
    }
};