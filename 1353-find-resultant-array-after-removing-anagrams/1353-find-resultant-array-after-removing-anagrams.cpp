class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        string prevSortedWord = "";
        vector<string> result;

        for (string word : words) {
            string currSortedWord = word;
            sort(currSortedWord.begin(), currSortedWord.end());
            if (currSortedWord != prevSortedWord) {
                result.push_back(word);
                prevSortedWord = currSortedWord;
            }
        }
        return result;
    }
};