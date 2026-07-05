class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        string ans;
        ans.reserve(word1.size() + word2.size()); // Avoid reallocations

        while (i < word1.size() && j < word2.size()) {
            ans.push_back(word1[i++]);
            ans.push_back(word2[j++]);
        }

        while (i < word1.size())
            ans.push_back(word1[i++]);

        while (j < word2.size())
            ans.push_back(word2[j++]);

        return ans;
    }
};