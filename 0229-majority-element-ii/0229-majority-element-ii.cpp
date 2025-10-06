class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans;
        int freq1=0, freq2=0;
        int ans1=INT_MIN, ans2=INT_MIN;
        for (int i=0; i<n; i++){
            if (ans1==nums[i]) {
                freq1++;
            } else if (ans2==nums[i]) {
                freq2++;
            } else if (freq1==0) {
                ans1=nums[i];
                freq1 = 1;
            } else if (freq2==0) {
                ans2=nums[i];
                freq2 = 1;
            } else {
                freq1--;
                freq2--;
            }
        }
        int f1=0, f2=0;
        int condition = int (n/3);
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == ans1) f1++;
            if (nums[i] == ans2) f2++;
        }
        if (f1>condition) ans.push_back(ans1);
        if (f2>condition && ans2!=ans1) ans.push_back(ans2);
        return ans;
    }
}; 
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans;
//         int freq1 = 0, freq2 = 0;
//         int ans1 = INT_MIN, ans2 = INT_MIN;
        
//         // First pass: Find potential majority elements
//         for (int i = 0; i < n; i++) {
//             if (ans1 == nums[i]) {
//                 freq1++;
//             } else if (ans2 == nums[i]) {
//                 freq2++;
//             } else if (freq1 == 0) {
//                 ans1 = nums[i];
//                 freq1 = 1;
//             } else if (freq2 == 0) {
//                 ans2 = nums[i];
//                 freq2 = 1;
//             } else {
//                 freq1--;
//                 freq2--;
//             }
//         }
        
//         // Second pass: Verify the candidates
//         int f1 = 0, f2 = 0;
//         for (int i = 0; i < n; i++) {
//             if (nums[i] == ans1) f1++;
//             if (nums[i] == ans2) f2++;
//         }
        
//         int condition = n / 3;
//         if (f1 > condition) ans.push_back(ans1);
//         if (f2 > condition && ans2 != ans1) ans.push_back(ans2);
        
//         return ans;
//     }
// };