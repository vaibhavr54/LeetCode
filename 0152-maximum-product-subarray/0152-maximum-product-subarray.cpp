class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        // int maxProd = nums[0], minProd = nums[0], result = nums[0];
        // for (int i=1; i<n; i++) {
        //     if (nums[i] < 0) {
        //         swap(maxProd, minProd);
        //     }
        //     maxProd = max(nums[i], maxProd*nums[i]);
        //     minProd = min(nums[i], minProd*nums[i]);

        //     result = max(result, maxProd);
        // }
        // return result;


        int pref = 1, suff = 1, ans = INT_MIN;

        for (int i=0; i<n; i++) {

            if (pref == 0) pref = 1;
            if (suff == 0) suff = 1;

            pref *= nums[i];
            suff *= nums[n-i-1];

            ans = max(ans, max(pref, suff)); 
        }
        return ans;
    }
};