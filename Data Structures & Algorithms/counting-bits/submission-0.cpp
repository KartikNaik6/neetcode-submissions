class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> count;
        int c;
        for(int i=0;i<n+1;i++){
            c=0;
            for(int j=0; j<32;j++){
                if(1<<j&i){
                    c++;
                }
            }
            count.emplace_back(c);
        }
        return count;
    }
};
