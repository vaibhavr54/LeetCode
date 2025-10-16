class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        string result;

        for (char ch : address) {
            if (ch == '.') {
                result += "[.]";
            } else {
                result += ch;
            }
        }
        return result;
    }
};