class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maxWords = 0;
        for (int i=0; i<n; i++) {
            int currCnt = 1;
            for (int j=0; j<sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') {
                    currCnt++;
                }
            }
            maxWords = max(maxWords, currCnt);
        }
        return maxWords;
    }
};