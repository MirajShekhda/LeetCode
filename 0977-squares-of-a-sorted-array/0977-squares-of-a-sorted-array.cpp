class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer;
        int left = 0;
        int right = nums.size()-1;
        while(left <= right){
            if(nums[left] * nums[left] > nums[right] * nums[right]){
                answer.push_back(nums[left] * nums[left]);
                left++;
            }else{
                answer.push_back(nums[right] * nums[right]);
                right--;
            }
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};