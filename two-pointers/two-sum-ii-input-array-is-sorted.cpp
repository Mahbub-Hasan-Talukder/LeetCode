class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++){
            int pos = lower_bound(numbers.begin(),numbers.end(),target - numbers[i])-numbers.begin();
            if(pos<numbers.size()-1 and numbers[pos]==numbers[pos+1])pos++;
            if(pos<numbers.size() and numbers[pos]==target-numbers[i] and i!=pos)return {i+1,pos+1};
        }
        return {};
    }
};