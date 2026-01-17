class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int a, b;
        unordered_set<int> s;
        int actSum = 0, expSum = 0;
        
        for (int i=0; i<n; i++) {
            if (s.count(nums[i])) {
                a = nums[i];
                ans.push_back(a);
            }
            actSum += nums[i];
            s.insert(nums[i]);
        }
        expSum = n*(n+1)/2;
        b = expSum - actSum + a;
        ans.push_back(b);
        return ans;
    }
};