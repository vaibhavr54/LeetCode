class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> result(n, 0);

        // for (int i=0; i<n; i++) {
        //     int cnt = 0;
        //     for (int j=0; j<n; j++) {
        //         if (nums[i] > nums[j]) cnt++;
        //     }
        //     result[i] = cnt;
        // }
        // return result;

        int n = nums.size();
        vector<int> sorted = nums;
        unordered_map<int, int> map;

        sort(sorted.begin(), sorted.end());

        for (int i=0; i<sorted.size(); i++) {
            if (map.find(sorted[i]) == map.end()) {
                map[sorted[i]] = i;
            }
        }

        vector<int> result(n, 0);

        for (int i=0; i<n; i++) {
            result[i] = map[nums[i]];
        }
        return result;
    }
};