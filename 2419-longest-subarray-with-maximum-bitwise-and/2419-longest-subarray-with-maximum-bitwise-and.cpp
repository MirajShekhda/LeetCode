class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxAND = *max_element(nums.begin(),nums.end());

        int currLen = 0;
        int maxLen = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == maxAND){
                currLen++;
                maxLen = max(currLen,maxLen);
            }else{
                currLen = 0;
            }
        }

        return maxLen;
    }
};