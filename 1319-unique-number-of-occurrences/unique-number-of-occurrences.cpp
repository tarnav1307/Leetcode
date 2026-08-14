class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        for(int c : arr){
            m[c]++;
        }
        set<int> s;
        for(auto a:m){
            if(s.find(a.second)!=s.end()){
                return false;
            }
            s.insert(a.second);
        }
        return true;
    }
};