class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cur = 0, mn = 10000000, pos;
        for(int i=0;i<gas.size();i++){
            cur +=(gas[i]-cost[i]);
            if(cur<=mn){
                mn = cur; pos = (i+1)%gas.size();
            }
        }
        cur = 0;
        for(int i=pos;i<gas.size();i++){
            cur +=(gas[i]-cost[i]);
            if(cur<0){
                return -1;
            }
        }
        for(int i=0;i<pos;i++){
            cur +=(gas[i]-cost[i]);
            if(cur<0){
                return -1;
            }
        }
        return pos;
        
    }
};