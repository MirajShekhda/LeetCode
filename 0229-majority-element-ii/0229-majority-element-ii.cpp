class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer;

        int el1 = INT_MIN;
        int el2 = INT_MIN;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == el1){
                cnt1++;
            }else if(nums[i] == el2){
                cnt2++;
            }else if(cnt1 == 0){
                el1 = nums[i];
                cnt1++;
            }else if(cnt2 == 0){
                el2 = nums[i];
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int i=0; i<n; i++){
            if(nums[i]==el1){
                cnt1++;
            }
            if(nums[i]==el2){
                cnt2++;
            }
        }
        int min = floor(n/3);
        if(cnt1 > min) answer.push_back(el1);
        if(cnt2 > min) answer.push_back(el2);
        return answer;
    }
};