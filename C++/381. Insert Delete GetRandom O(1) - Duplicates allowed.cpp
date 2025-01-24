class RandomizedCollection {
public:
    vector<int>a;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        if(find(a.begin(),a.end(),val)==a.end()){
            a.push_back(val);
            return true;
        }
        a.push_back(val);
        return false;
    }
    
    bool remove(int val) {
        if(find(a.begin(),a.end(),val)==a.end())
        return false;
        a.erase(find(a.begin(),a.end(),val));
        return true;
    }
    
    int getRandom() {
        return a[rand()%a.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */