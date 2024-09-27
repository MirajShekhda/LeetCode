class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans{-1,-1};
        bool check1 = true;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target && check1){
                ans[0]=i;
                check1 = false;
            }
            if(nums[i]>target && ans[0]>-1){
                ans[1]=i-1;
                break;
            }
        }
        if (ans[0] != -1 && ans[1] == -1) {
            ans[1] = nums.size() - 1;
        }
        return ans;
    }
};