class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        multiset <char> ms1,ms2;
        for(int i=0; i<s.length();i++){
            ms1.insert(s[i]);
            ms2.insert(t[i]);
        }
        if(ms1!=ms2){
            return false;
        }
        return true;
    }
};
