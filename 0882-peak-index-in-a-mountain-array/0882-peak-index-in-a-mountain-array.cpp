class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int st=0, end=n-1;
        while(st<end) {
            int mid = st + (end-st)/2;
            if (arr[mid+1] > arr[mid]) { // check if other than mid is bigger towards right
                st = mid+1;
            } else {
                end = mid;
            }
        }
        return st; // return end;
    }
};