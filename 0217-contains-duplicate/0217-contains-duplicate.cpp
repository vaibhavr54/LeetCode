class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        // bool status = false;
        // for (int i=0; i<n; i++) {
        //     for (int j=i+1; j<n; j++) {
        //         if (nums[i] == nums[j]) {
        //             status = true;
        //             break;
        //         } 
        //     }
        // }
        // return status;



        // sort(nums.begin(), nums.end());
        // for (int i=1; i<n; i++) {
        //     if (nums[i] == nums[i-1]) {
        //         return true;
        //     } 
        // }
        // return false;


        unordered_set<int> s;
        for (int i=0; i<n; i++) {
            if (s.find(nums[i]) != s.end()) {
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};