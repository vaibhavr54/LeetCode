class Solution {
public:

    bool isFreqSame(int fre1[], int freq2[]) {
        for (int i=0; i<26; i++) {
            if (fre1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        // Step 1: Get the freq array of s1
        int partFreq[26] = {0};
        for (int i=0; i<s1.length(); i++) {
            partFreq[s1[i] - 'a']++;
        }

        // Step 2: Get the frq array of s2
        for (int i=0; i<s2.length(); i++) {
            int winIdx = 0, idx = i;
            int winFreq[26] = {0};
            while(winIdx < s1.length() && idx < s2.length()) {
                winFreq[s2[idx] - 'a']++;
                winIdx++, idx++;
            }
            if (isFreqSame(partFreq, winFreq)) {
                return true;
            }
        }
        return false;
    }
};