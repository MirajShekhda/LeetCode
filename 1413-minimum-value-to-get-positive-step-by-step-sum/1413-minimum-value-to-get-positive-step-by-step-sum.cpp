class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int mini = 0;

        for(int num : nums){
            sum += num;
            mini = min(mini,sum);
        }

        if(mini < 0) return (1-mini);
        return 1;
    }
};