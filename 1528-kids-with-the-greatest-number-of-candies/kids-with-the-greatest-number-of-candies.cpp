class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        vector<int> updated;
        for(auto i : candies){
            updated.push_back(i+extraCandies);
        }
        for(int i = 0;i<candies.size();i++){
            bool a = true;
            for(int j = 0;j<candies.size();j++){
                if(i==j) continue;
                if(updated[i]<candies[j])
                    a=false;
            }
            ans.push_back(a);
        }
        return ans;
    }
};