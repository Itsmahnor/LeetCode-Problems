class RandomizedSet {
public:
vector<int> arr;
unordered_map<int,int> m;
    RandomizedSet() {

    }
    
    bool insert(int val) {
            if (m.find(val) != m.end()) {
            return false; // value already exists
        }
       arr.push_back(val);
       m[val]=arr.size()-1;
       return true;
    }
    
    bool remove(int val) {
         if (m.find(val) == m.end()) {
            return false; // value does not exist
        }
       int lastElement=arr.back();
       int ind=m[val];
       arr[ind]=lastElement;
       m[lastElement]=ind;

       m.erase(val);
       arr.pop_back();
       return true;
    }
    
    int getRandom() {
        int random=rand()%arr.size();
        return arr[random];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */