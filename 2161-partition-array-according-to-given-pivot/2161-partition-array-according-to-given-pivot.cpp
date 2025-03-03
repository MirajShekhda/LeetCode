class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lesser;
        vector<int> greter;
        int equal = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<pivot){
                lesser.push_back(nums[i]);
            }else if(nums[i]==pivot){
                equal++;
            }else{
                greter.push_back(nums[i]);
            }
        }
        int p=0;
        for(int i=0; i<lesser.size(); i++){
            nums[p] = lesser[i];
            p++;
        }
        for(int i=0; i<equal; i++){
            nums[p] = pivot;
            p++;
        }
        for(int i=0; i<greter.size(); i++){
            nums[p] = greter[i];
            p++;
        }
        return nums;
    }
};