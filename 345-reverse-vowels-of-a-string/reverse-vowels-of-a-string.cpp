class Solution {
public: 
    bool vowel(char a){
        vector<char> v = {'a','e','i','o','u','A','E','I','O','U'};
        for(char i : v){
            if(a==i)
                return true;
        }
        return false;
    }
    string reverseVowels(string st) {
        vector<char> w;
        for(char i : st){
            w.push_back(i);
        }
        int s = 0;
        int e = w.size()-1;
        while(s<=e){
            if(vowel(w[s])&&vowel(w[e])){
                char temp = w[s];
                w[s] = w[e];
                w[e] = temp;
                s++;
                e--;
            }
            else{
                if((vowel(w[s])))
                    e--;
                else if(((vowel(w[e]))))
                    s++;
                else{
                    s++;
                    e--;
                }
            }
        }
        string ans ="";
        for(int i = 0 ; i<w.size();i++){
            ans+=w[i];
        }
        return ans;
    }
};