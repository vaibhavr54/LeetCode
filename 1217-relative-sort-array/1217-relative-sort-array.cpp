class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> order;
        for (int i=0; i<arr2.size(); i++) {
            order[arr2[i]] = i;
        }
        sort(arr1.begin(), arr1.end(), [&](int a, int b) {
            if (order.count(a) && order.count(b)) {
                return order[a]<order[b];
            }
            if (order.count(a)) {
                return true; // this function valids sorting a(in arr2) before b(not in arr2)
            }
            if (order.count(b)) {
                return false; //rather going with this custom sort(a<b), we will go with b<a as we want b before a
            }
            return a<b; //custom sort;
        });
        return arr1;
    }
};