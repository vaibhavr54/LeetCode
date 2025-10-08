class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.size();
        unordered_set<char> set;

        for (char ch : s) {
            if (set.find(ch) != set.end()) {
                return ch;
            }
            set.insert(ch);
        }
        return NULL;
    }
};