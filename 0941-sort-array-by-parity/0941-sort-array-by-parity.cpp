class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=1;
        while (i<n && j<n) {
            if (nums[i]%2 == 1 && nums[j]%2 == 1) {
                j++;
            } else if (nums[i]%2 == 0 && nums[j]%2 == 1) {
                i++; 
                j++;
            } else if (nums[i]%2 == 1 && nums[j]%2 == 0) {
                swap(nums[i], nums[j]);
            } else if (nums[i]%2 == 0 && nums[j]%2 == 0) {
                i++; 
                j++;
            }
        }
        return nums;
    }
};