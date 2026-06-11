class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector <int> hashmap(26,0);
        int index;
        for(int i=0; i<s.length(); i++){
            hashmap[s[i]-'a']++;
            hashmap[t[i]-'a']--;
        }
        for(int i=0 ;i<26;i++){
            if(hashmap[i]!=0){
                return false;
            }
        }
        return true;
    }
};
