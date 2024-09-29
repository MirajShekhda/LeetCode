class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num1 = 0,num2 = 0, num3 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                num1++;
            }else if(nums[i]==1){
                num2++;
            }else{
                num3++;
            }
        }
        for(int i=0; i<num1; i++){
            nums[i]=0;
        }
        for(int i=num1; i<num1+num2; i++){
            nums[i]=1;
        }
        for(int i=num1+num2; i<num1+num2+num3; i++){
            nums[i]=2;
        }
    }
};