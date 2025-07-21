class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int answer = 1;
        int curr = 0;
        int prev = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]-1 == prev){
                curr++;
                prev = nums[i];
            }else if(nums[i] != prev){
                prev = nums[i];
                curr=1;
            }
            answer = max(answer, curr);
        }
        return answer;
    }
};