class Solution {
public:
    int helperBinarySearch(vector<int>& nums, int target, int st, int end) {
        while (st<= end) {
            int mid = st+(end-st)/2;
            if (nums[mid] == target) return mid;
            else if (target > nums[mid]) {
                return helperBinarySearch(nums, target, mid+1, end);
            } else {
                return helperBinarySearch(nums, target, st, mid-1);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return helperBinarySearch(nums, target, 0, nums.size()-1);
    }
};
        // int n = nums.size();
        // int st=0, end = n-1;
        // while (st<=end) {
        //     int mid = st+(end-st)/2;
        //     if (nums[mid] == target) return mid;
        //     else if (target > nums[mid]) {
        //         st = mid+1;
        //     } else {
        //         end = mid-1;
        //     }
        // }
        // return -1;