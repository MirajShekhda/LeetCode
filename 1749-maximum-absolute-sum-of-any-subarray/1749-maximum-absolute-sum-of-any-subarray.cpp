class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        int summx = nums[0];
        int summi = nums[0];
        for(int i=1; i<nums.size(); i++){
            summx = max(nums[i],summx+nums[i]);
            maxi = max(maxi,summx);
            
            summi = min(nums[i],summi+nums[i]);
            mini = min(mini,summi);
        }
        return max(abs(maxi),abs(mini));
    }
};