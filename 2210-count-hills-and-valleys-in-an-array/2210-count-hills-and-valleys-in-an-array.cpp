class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int hill = 0;
        int valley = 0;
        int prev = nums[0];
        for(int i = 1; i<n-1; i++){
            if(nums[i] != nums[i+1]){
                if(prev < nums[i] && nums[i+1] < nums[i]){
                    hill++;
                }else if(prev > nums[i] && nums[i+1] > nums[i]){
                    valley++;
                }
                prev = nums[i];
            }
        }

        return hill+valley;
    }
};