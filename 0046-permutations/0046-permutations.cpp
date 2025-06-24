class Solution {
public:
    void dfs(vector<vector<int>>& res, vector<int>& nums , int idx) {
        if(idx == nums.size()) return res.push_back(nums);
        for(int i = idx; i < nums.size(); i++){
            swap(nums[idx] , nums[i]);
            dfs(res , nums , idx + 1);
            swap(nums[idx] , nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        dfs(res , nums , 0);
        return res;
    }
};