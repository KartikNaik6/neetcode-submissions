class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int slow=0,fast=1;

        while(fast<prices.size()){
            if(prices[slow]>=prices[fast]){
                slow=fast;
                fast++;
                continue;
            }
            else if(prices[fast]-prices[slow]>maxp){
                maxp=prices[fast]-prices[slow];
            }
            fast++;
        }

        return maxp;
    }
};
