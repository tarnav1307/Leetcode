class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg = 0;
        int tc = 0;
        for(int i =0;i<gas.size();i++){
            tg += gas[i];
            tc += cost[i];
        }
        if(tg<tc)
            return -1;
        int start = 0 , cap = 0;
        for(int i =0;i<gas.size();i++){
            cap += gas[i] - cost[i];
            if(cap<0){
                start = i + 1;
                cap = 0;
            }
        }
        return start;
    }
};