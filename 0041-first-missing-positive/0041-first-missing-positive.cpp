class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int current = 1;

        for (int num : nums) {
            if (num == current) {
                current++;
            }
        }
        return current;
    }
};