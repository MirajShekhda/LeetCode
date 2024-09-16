class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(),ans = 0;
        vector<int> arr(n+1, 0);
        int j=0;
        for(int i=0; i<n; i++){
            j = nums[i];
            arr[j]=1;
        }
        for(int i=0; i<=n; i++){
            if(arr[i]==0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};