class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // vector<int> result;

        // for (int num : nums) {
        //     if (num < pivot) {
        //         result.push_back(num);
        //     }
        // }

        // for (int num : nums) {
        //     if (num == pivot) {
        //         result.push_back(num);
        //     }
        // }

        // for (int num : nums) {
        //     if (num > pivot) {
        //         result.push_back(num);
        //     }
        // }

        // return result;

        vector<int> less, equal, greator;

        for (int num : nums) {
            if (num < pivot) less.push_back(num);
            else if (num == pivot) equal.push_back(num);
            else if (num > pivot) greator.push_back(num);
        }
        less.insert(less.end(), equal.begin(), equal.end());
        less.insert(less.end(), greator.begin(), greator.end());

        return less;
    }
};