class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return arr[0];

        int st=0, end=n-1;
        while (st<=end) {
            int mid = st + (end-st) / 2;

            if (mid == 0 && arr[mid] != arr[mid+1]) return arr[0];
            if (mid == n-1 && arr[n-1] != arr[n-2]) return arr[n-1];
            if (arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];

            if (mid % 2 == 0) { //even halfs
                if (arr[mid] == arr[mid-1]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else { // odd halfs
                if (arr[mid] == arr[mid-1]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};