class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l =0;
        int maxlength = 0;
        unordered_map<char,int> m;
        for(int r = 0;r<s.length();r++){
            char c = s[r];
            if(m.find(c)!=m.end()){
                l = max(l,m[c]+1);
            }
            m[c] = r;
            maxlength = max(maxlength,r-l+1);
        }
        return maxlength;
    }
};