class RandomizedSet {
public:
    vector<int> vec;
    unordered_map<int,int> mymap;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mymap.find(val)!=mymap.end()){
            return false;
        }
        vec.push_back(val);
        
        mymap[val]=vec.size() -1;
        
        return true;
    }
    
    bool remove(int val) {
        if(mymap.find(val)==mymap.end()){
            return false;
        }
        int deleted_index=mymap[val];
        int last_element=vec.back();
        vec.back()=val;
        
        vec[deleted_index]=last_element;
        
        mymap[last_element]=deleted_index;
        vec.pop_back();
        mymap.erase(val);
        return true;
    }
    
    int getRandom() {
        
        int n=vec.size();
        int randomIndex=rand()%n;
        return vec[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */