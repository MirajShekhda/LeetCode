class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=target){
                result = i;
                break;
            }
        }
        if(result != -1){
            return result;
        }else{
            return nums.size();
        }
    }
};