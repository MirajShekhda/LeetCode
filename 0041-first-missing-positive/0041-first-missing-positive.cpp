class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n; i++){
            int temp = nums[i];

            while(temp >= 1 && temp <= n && temp != i+1 && nums[temp-1] != temp){
                swap(nums[temp-1],nums[i]);
                temp = nums[i];
            }
        }

        for(int i=0; i<n; i++){
            if(nums[i] == i+1){
                continue;
            }
            return i+1;
        }

        return n+1;
    }
};