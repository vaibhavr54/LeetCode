class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> seen;
        unordered_map<int, int> firstSeen;
        unordered_map<int, int> lastSeen;
        int maxDegree = 0;

        for (int i=0; i<nums.size(); i++) {
            seen[nums[i]]++;
            maxDegree = max(maxDegree, seen[nums[i]]); // find max degree of array

            if (firstSeen.find(nums[i]) == firstSeen.end()) {
                firstSeen[nums[i]] = i; // store first found index
            }
            lastSeen[nums[i]] = i; // lastSeen val gets stored as it gets updated everytime
        }

        int minLength = nums.size();
        for (auto& [key, val] : seen) {
            if (val == maxDegree) {
                minLength = min(minLength, lastSeen[key] - firstSeen[key] + 1); //idx-idx+1
            }
        }
        return minLength;
    }
};