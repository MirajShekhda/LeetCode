class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool result = false;
        map<int,int> cnt;
        for(int i=0; i<nums.size(); i++){
            cnt[nums[i]]++;
        }
        for(auto it : cnt){
            if(it.second>=2){
                result=true;
                break;
            }
        }
        return result;
    }
};