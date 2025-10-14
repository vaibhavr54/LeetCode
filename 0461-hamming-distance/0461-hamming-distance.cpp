class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        int xorVal = x ^ y;

        while (xorVal) {
            count += xorVal & 1;
            xorVal >>= 1;
        }
        return count;
    }
};