class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        unordered_map<int, int> mp;
        stack<int> s;

        for (int i=n-1; i>=0; i--) {
            while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }
            mp[nums2[i]] = s.empty() ? -1 : s.top();
            s.push(nums2[i]);
        }

        vector<int> result;
        for (int num : nums1) {
            result.push_back(mp[num]);
        }
        return result;
    }
};