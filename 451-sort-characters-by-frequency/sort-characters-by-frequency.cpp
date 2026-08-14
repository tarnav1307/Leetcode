class Solution {
public:
    string frequencySort(string s) {
        map<char, int> m;

        // Count frequency
        for(char c : s) {
            m[c]++;
        }

        // Convert map to vector
        vector<pair<char, int>> v(m.begin(), m.end());

        // Sort by frequency (highest first)
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Build answer
        string ans;

        for(auto &p : v) {
            for(int i = 0; i < p.second; i++) {
                ans += p.first;
            }
        }

        return ans;
    }
};