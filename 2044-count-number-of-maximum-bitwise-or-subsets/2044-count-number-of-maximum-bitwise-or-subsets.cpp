class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        for(auto& num : nums){
            maxOr |= num;
        }
        return cntMaxOr(nums,maxOr,0,0);
    }
private:
    int cntMaxOr(vector<int> nums, int maxOr, int idx, int currOr){
        int n = nums.size();
        if(idx == n){
            if(currOr == maxOr){
                return 1;
            }else{
                return 0;
            }
        }
        if(currOr == maxOr){
            return 1 << (n - idx);
        }
        int take = cntMaxOr(nums, maxOr, idx+1, currOr | nums[idx]);
        int nottake = cntMaxOr(nums, maxOr, idx+1, currOr);
        return take + nottake;
    } 
};