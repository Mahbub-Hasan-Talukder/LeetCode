class RandomizedSet {
public:
    vector<int>v;
    unordered_map<int,int>ind;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(ind.find(val)!=ind.end())return false;
        v.push_back(val);
        ind[val] = v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(ind.find(val)==ind.end())return false;
        int curInd = ind[val];
        int last = v.back();
        swap(v[curInd],v[v.size()-1]);
        ind[last] = curInd;
        v.pop_back();
        ind.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */