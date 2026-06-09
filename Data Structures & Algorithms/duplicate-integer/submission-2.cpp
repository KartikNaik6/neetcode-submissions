class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto it : nums){
            auto flag=s.insert(it);
            if(!flag.second){
                return true;
            }
        }
        return false;
    }
};