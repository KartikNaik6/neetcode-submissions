class Solution {
public:
    bool isPalindrome(string s) {
        int f=0,r=s.size()-1;
        while(f<r){
            if(!isalnum(s[f])){
                f++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            if(tolower(s[f])!=tolower(s[r])){
                return false;
            }
            f++;
            r--;
        }
        return true;
    }
};
