class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n = nums.size();
        int answer = 0;
        for(int i=0; i<n; i++){
            bool isGood = true;

            if(i-k >= 0){
                if(nums[i] <= nums[i-k]){
                    isGood = false;
                }
            }
            if(i+k < n){
                if(nums[i] <= nums[i+k]){
                    isGood = false;
                }
            }
            if(isGood){
                answer += nums[i];
            }
        }
        return answer;
    }
};