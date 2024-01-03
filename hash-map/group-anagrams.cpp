//https://leetcode.com/problems/group-anagrams/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<int,int>vis;
        vector<vector<string>> ans;
        vector<pair<string,int>>v;

        strs.push_back("*");
        
        int ind=0;
        for(int i=0;i<strs.size()-1;i++){
            string s = strs[i]; sort(s.begin(),s.end());
            v.push_back({s,i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            int j = i;
            vector<string>row;
            while(j<v.size() && v[j].first==v[i].first){
                row.push_back(strs[v[j].second]);
                j++;
            }
            i = j-1;
            ans.push_back(row);
        }
        return ans;
    }

};