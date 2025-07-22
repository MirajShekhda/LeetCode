class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        int answer = 0;
        int currSum = 0;
        int l = 0;

        for(int r=0; r<n; r++){
            while(s.count(nums[r])){
                s.erase(nums[l]);
                currSum -= nums[l];
                l++;
            }

            s.insert(nums[r]);
            currSum += nums[r];

            answer = max(answer,currSum);
        }

        return answer;
    }
};