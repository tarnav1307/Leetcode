class Solution {
public:
    deque<int> dq;
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i =0;i<k;i++){
            if(dq.empty()){
                dq.push_back(i);
            }
            else{
                while(dq.size()>0&&nums[dq.back()]<=nums[i]){
                    dq.pop_back();
                }
                dq.push_back(i);
            }
        }
        ans.push_back(nums[dq.front()]);
        for(int j=k;j<nums.size();j++){
            while(!dq.empty() && dq.front() < j-k+1){
                dq.pop_front();
            }
            while(dq.size()>0&&nums[dq.back()]<=nums[j]){
                    dq.pop_back();
                }
            dq.push_back(j);
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};