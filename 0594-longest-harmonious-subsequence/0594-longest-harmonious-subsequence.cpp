class Solution {
public:
    static int findLHS(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int maxLen=0;
        for(int l=0, r=0; r<n; r++){
            int x=nums[r];
            while(l<r && nums[l]<x-1) l++;
            if (nums[l]==x-1) maxLen=max(maxLen, r-l+1);
        }
        return maxLen;
    }
};