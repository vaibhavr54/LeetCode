class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0, n=nums.size(), end=n-1;
        
        while (st<=end) {
            int mid = st+(end-st)/2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[st]<=nums[mid]) { //Left Sorted Check
                if (nums[st]<=target && target<=nums[mid]) {
                    end=mid-1;
                } else {
                    st=mid+1;
                }
            } else { //right sorted confirmed
                if (nums[mid]<=target && target<=nums[end]){
                    st = mid+1;
                } else {
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};