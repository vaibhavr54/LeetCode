class Solution {
public:
    bool validMountainArray(vector<int>& nums) {
        int n = nums.size();
        if (n<3) return false;

        int i = 0;
        while (i<n && nums[i] < nums[i+1]) {
            i++;
        } // walk up
        if (i==0 || i==n-1) return false; // peak cant be at first or last index
        while (i+1<n && nums[i]>nums[i+1]) {
            i++;
        } // walk down
        return i == n-1;
    }
};