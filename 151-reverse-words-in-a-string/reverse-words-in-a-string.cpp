class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans = "";
        for(int i =0;i<s.length();i++){
            string a = "";
            while(s[i]!=' '&&i<s.length()){
                a+=s[i];
                i++;
            }
            if(!a.empty()){
            reverse(a.begin(),a.end());
            ans += " "+a;
            }
        }
        return ans.substr(1);
    }
};