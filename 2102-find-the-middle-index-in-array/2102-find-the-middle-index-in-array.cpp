class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum = 0, left_sum = 0;
        for (int num:nums) {
            total_sum += num;
        }

        for (int i=0; i< nums.size(); i++) {
            if (left_sum*2+nums[i] == total_sum) {
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
    }
};