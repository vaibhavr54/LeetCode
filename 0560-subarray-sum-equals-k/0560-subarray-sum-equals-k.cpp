class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n = nums.size();
        // int res = 0;
        // for (int i=0; i<n; i++) {
        //     int sum =  0;
        //     for (int j=i; j<n; j++) {
        //         sum += nums[j];
        //         if (sum == k) {
        //             res++;
        //         }
        //     }
        // }
        // return res;

        int n = nums.size();
        int sum = 0;
        unordered_map<int, int> mp;
        int cnt = 0;

        mp[0] = 1;
        for (int i=0; i<n; i++) {
            sum += nums[i];
            int val = sum - k;
            if (mp.count(val)) {
                cnt += mp[val];
            }
            mp[sum]++;
        }
        return cnt;
    }
};