class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int allOdd = 0;
        int allEven = 0;
        int prevMod = nums[0]%2;
        int alternate = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                allEven++;
            }else{
                allOdd++;
            }
            int currMod = nums[i]%2;
            if(i>=1 && currMod != prevMod){
                alternate++;
                prevMod = currMod;
            }
        }

        return max({allEven, allOdd, alternate}); 
    }
};