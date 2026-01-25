class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        queue<char> q;

        for (int i=0; i<n; i++) {
            if (mp.find(s[i]) == mp.end()) {
                q.push(i);
            }
            mp[s[i]]++;

            while (!q.empty() && mp[s[q.front()]] > 1) {
                q.pop();
            }
        }
        return q.empty() ? -1 : q.front();
    }
};