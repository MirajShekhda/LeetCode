class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;
        int left = 0;

        for(int right = 0; right<n ; right++){
            if(nums[right] == 0){
                k--;
            }
            while(k < 0){
                if(nums[left] == 0){
                    k++;
                }
                left++;
            }
            maxLen = max(maxLen, right-left+1);
        }

        return maxLen;
    }
};