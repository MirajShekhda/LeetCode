class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        long long max_diff = 0;
        long long max_left = 0;
        for(int i=0; i<n; i++){
            ans = max(ans,(long long)max_diff*nums[i]);
            max_diff = max(max_diff, (long long)max_left-nums[i]);
            max_left = max(max_left, (long long)nums[i]);
        }      
        return ans;
    }
};