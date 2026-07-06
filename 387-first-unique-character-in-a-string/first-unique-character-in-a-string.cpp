class Solution {
public:
    queue<int> q;
    unordered_map<int , int> m;
    int firstUniqChar(string s) {
        int a = s.length();
        for(int i =0;i<a;i++){
            if(m.find(s[i])==m.end()){
                m[s[i]] = 1;
                q.push(s[i]);
            }
            else if(m.find(s[i])!=m.end()){
                m[s[i]]++;
            }
            while(m[q.front()]>1){
                q.pop();
            }
        }
        int idx = 0;
        for(int i =0;i<a;i++){
            if(s[i]==q.front()){
                idx = i;
                return idx;
            }
        }
        return -1;
    }
};