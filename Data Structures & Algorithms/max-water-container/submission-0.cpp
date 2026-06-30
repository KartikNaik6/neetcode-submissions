class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxa=0, a=0;
        int left=0, right = heights.size()-1;

        while(left<right){
            a=min(heights[right],heights[left])*(right-left);
            if(a>maxa) maxa=a;
            if(heights[left]>=heights[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxa;
    }
};
