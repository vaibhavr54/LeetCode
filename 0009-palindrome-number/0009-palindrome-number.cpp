class Solution {
public:
    bool isPalindrome(int x) {
        string num1 = to_string(x);
        reverse(num1.begin(), num1.end());

        return (to_string(x)==num1);
    }
};