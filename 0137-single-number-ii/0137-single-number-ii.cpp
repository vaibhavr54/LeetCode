class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> map;

        for (int num : nums) {
            map[num]++;
        }

        for (auto& [num, freq] : map) {
            if (freq == 1) {
                return num;
            }
        }
        return 0;
    }
};