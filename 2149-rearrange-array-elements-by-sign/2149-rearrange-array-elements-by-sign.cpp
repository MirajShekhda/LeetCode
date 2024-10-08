class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(), posi = 0, negi=1;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negi]=nums[i];
                negi += 2;
            }else{
                ans[posi]=nums[i];
                posi += 2;
            }
        }
        return ans;
    }
};