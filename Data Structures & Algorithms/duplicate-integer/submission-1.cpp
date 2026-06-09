class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto it : nums){
            s.insert(it);
        }
        if(s.size()==nums.size()){
            return false;
        }
        else{
            return true;
        }
    }
};