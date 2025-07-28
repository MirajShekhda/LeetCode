class Solution {
public:
    int mxOr = 0;

    int cntMaxOr(vector<int> nums, int idx, int currOr){
        int n = nums.size();
        if(idx == n){
            if(currOr == mxOr){
                return 1;
            }else{
                return 0;
            }
        }
        int take = cntMaxOr(nums, idx+1, currOr | nums[idx]);
        int nottake = cntMaxOr(nums, idx+1, currOr);
        return take + nottake;
    } 

    int countMaxOrSubsets(vector<int>& nums) {
        int mx = 0;
        for(auto& num : nums){
            mx |= num;
        }
        mxOr = mx;

        return cntMaxOr(nums,0,0);
    }
};