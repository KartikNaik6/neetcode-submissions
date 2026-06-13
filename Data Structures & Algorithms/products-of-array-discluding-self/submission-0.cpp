class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int zero=0;
        for(int i =0 ; i<nums.size();i++){
            if(nums[i]==0){
                zero++;
                continue;
            }
            if(zero>1){
                prod=0;
                break;
            }
            prod*=nums[i];
        }
        for(int i=0; i <nums.size();i++){
            if(zero>1){
                nums[i]=0;
            }
            else{
                if(nums[i]==0){
                    nums[i]=prod;
                }
                else{
                    if(zero==1){
                        nums[i]=0;
                    }
                    else{
                        nums[i]=prod/nums[i];
                    }
                }
            }
        }
        return nums;
    }
};
