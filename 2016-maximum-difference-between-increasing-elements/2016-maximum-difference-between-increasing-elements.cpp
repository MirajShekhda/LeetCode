class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = -1;
        int mn = nums[0];

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>mn){
                diff = max(diff, nums[i]-mn);
            }
            if(nums[i]<mn){
                mn = nums[i];
            }
        }
        return diff;
    }
};