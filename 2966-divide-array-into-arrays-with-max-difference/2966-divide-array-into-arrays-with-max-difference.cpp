class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<=nums.size()-3; i+=3){
            if(nums[i+2]-nums[i]<=k){
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[i+1]);
                temp.push_back(nums[i+2]);
                ans.push_back(temp);
            }else{
                return {};
            }
        }
        return ans;
    }
};