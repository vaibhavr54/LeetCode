class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n = numbers.size();
        // int i=0;
        // int j=n-1;
        // vector <int> ans;
        // while(i<j) {
        //     int pairSum = numbers[i]+numbers[j];
        //     if (pairSum<target) {
        //         i++;
        //     } else if (pairSum>target) {
        //         j--;
        //     } else {
        //         ans.push_back(i+1);
        //         ans.push_back(j+1);
        //         return ans;
        //     }
        // }
        // return ans;











        int n = nums.size();
        int st = 0, end = n - 1;

        while (st < end) {
            if (nums[st] + nums[end] == target) {
                return {st+1, end+1};
            } else if (nums[st] + nums[end] < target) {
                st++;
            } else {
                end--;
            }
        }
        return {};
    }
};