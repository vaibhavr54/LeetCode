class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int freq1 = 0, freq2 = 0;
        int ans1 = INT_MIN, ans2 = INT_MIN;
        for (int num : nums) {
            if (num == ans1) {
                freq1++;
            } else if (num == ans2) {
                freq2++;
            } else if (freq1 == 0) {
                ans1 = num;
                freq1 = 1;
            } else if (freq2 == 0) {
                ans2 = num;
                freq2 = 1;
            } else {
                freq1--;
                freq2--;
            }
        }
            int f1 = 0, f2 = 0;
            int cond = nums.size()/3;
            vector<int> ans;

            for (int num : nums) {
                if (num == ans1) f1++;
                if (num == ans2) f2++;
            }
            if (f1 > cond) ans.push_back(ans1);
            if (f2 > cond && ans2 != ans1) ans.push_back(ans2);

        return ans;
    }
};