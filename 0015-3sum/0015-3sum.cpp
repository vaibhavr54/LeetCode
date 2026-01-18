class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // int n = nums.size();
        // set<vector<int>> vec;

        // for (int i=0; i<n; i++) {
        //     for (int j=i+1; j<n; j++) {
        //         for (int k=j+1; k<n; k++) {
        //             if (nums[i]+nums[j]+nums[k] == 0) {
        //                 vector<int> triplet = {nums[i], nums[j], nums[k]};
        //                 sort(triplet.begin(), triplet.end());// to avoid [a,b,c], [b,a,c], etc..
        //                 vec.insert(triplet);
        //             }
        //         }
        //     }
        // }
        // return vector<vector<int>>(vec.begin(), vec.end()); // copy content of set in vec as ret type
    
    

        // better approach [a + b + c] == [-a = b + c];
        // int n = nums.size();
        // set<vector<int>> result;
        
        // for (int i=0; i<n; i++) {
        //     int a = nums[i];
        //     set<int> s;
        //     for (int j=i+1; j<n; j++) {
        //         int b = nums[j];
        //         int c = -(a+b);

        //         if (s.find(c) != s.end()) {
        //             vector<int> triplet = {a, b, c};
        //             sort(triplet.begin(), triplet.end());
        //             result.insert(triplet);
        //         }
        //         s.insert(b);
        //     }
        // }
        // return vector<vector<int>> (result.begin(), result.end());


        // optimal approach
        int n = nums.size();
        vector<vector<int>> ans;
    
        sort(nums.begin(), nums.end());

        for (int i=0; i<n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int j = i+1, k = n-1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++, k--;

                    while (j < k && nums[j] == nums[j-1]) j++;
                }
            }
        }
        return ans;
    }
};