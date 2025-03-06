class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        unordered_map<int,int> hash;
        for(int i=0; i<nums1.size(); i++){
            hash[nums1[i]] |= 1;
        }
        for(int i=0; i<nums2.size(); i++){
            if(hash[nums2[i]] == 1){
                ans.push_back(nums2[i]);
            }
            hash[nums2[i]] |= 2;
            
            
        }
        for(int i=0; i<nums3.size(); i++){
            if(hash[nums3[i]] == 1 || hash[nums3[i]] == 2){
                ans.push_back(nums3[i]);
            }
            hash[nums3[i]] |= 4;
        }
        return ans;
    }
};