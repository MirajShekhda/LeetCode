class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int kRadius = 2 * k + 1;
        vector<int> answer(n,-1);
        long long sum = 0;

        if(n < kRadius) return answer;

        for(int i = 0; i<n; i++){
            sum += nums[i];
            
            if(i - kRadius >= 0){
                sum -= nums[i - kRadius];
            }

            if(i >= kRadius - 1){
                answer[i-k] = sum / kRadius;
            }
        }
        return answer;
    }
};