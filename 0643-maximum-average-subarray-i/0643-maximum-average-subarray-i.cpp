class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int answer = INT_MIN;
        int i = 0;
        int j = 0;

        while(j < n){
            while(j-i < k){
                sum += nums[j];
                j++;
            }
            answer = max(answer, sum);
            sum -= nums[i];
            i++;
        }

        return double(answer)/k;

    }
};