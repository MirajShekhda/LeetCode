class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();
        if(n==1){
            return 0;
        }
        for(auto x : nums){
            freq[x] += 1;
        }
        if(freq.size()==1){
            return 0;
        }
        int maxLen = 0;
        for(auto& [x,f] : freq){
            if(freq.count(x-1)){
                maxLen  = max(maxLen, f+freq[x-1]);
            }
        }
        return maxLen;
    }
};