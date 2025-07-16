class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int allOdd = 0;
        int allEven = 0;
        for(int &num : nums){
            if(num%2 == 0){
                allEven++;
            }else{
                allOdd++;
            }
        }

        int prevMod = nums[0]%2;
        int alternate = 1;
        for(int i=1; i<nums.size(); i++){
            int currMod = nums[i]%2;
            if(currMod != prevMod){
                alternate++;
                prevMod = currMod;
            }
        }

        return max({allEven, allOdd, alternate}); 
    }
};