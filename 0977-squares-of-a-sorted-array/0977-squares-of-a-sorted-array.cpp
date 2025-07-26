class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer;
        for(auto& num : nums){
            answer.push_back(num*num);
        }
        sort(answer.begin(),answer.end());
        return answer;
    }
};