class RandomizedSet {
public:
   unordered_map<int, int> mp;
    vector<int> arr;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        
        // if val is already present in map
        
        if(mp.count(val))
            return false;
        
        // if val is not present in map
        
        // push val in arr
        
        arr.push_back(val);
        
        // push val in map
        
        mp[val] = arr.size() - 1;
        
        return true;
    }
    
    bool remove(int val) {
        
        // if val is present in map
        
        if(mp.count(val))
        {
            // find the index of val from array
            
            int idx = mp[val];
            
            // find the last value from array
            
            int last_val = arr.back();
            
            // put the last_val at idx
            
            arr[idx] = last_val;
            
            // remove the last element from array
            
            arr.pop_back();
            
            // update the value of last_val in map
           
            mp[last_val] = idx;
            
            // remove the val from map
            
            mp.erase(val);
            
            return true;
        }
        
        return false;
    }
    
    int getRandom() {
        
        // generate the random number from (0 to arr.size() - 1)
        
        int rand_idx = rand() % arr.size();
        
        return arr[rand_idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */