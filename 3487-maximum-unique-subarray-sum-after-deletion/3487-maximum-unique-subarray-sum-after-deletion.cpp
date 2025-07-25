class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> st;
        int maxi = INT_MIN;
        int answer = 0;
        for(int num : nums){
            if(num >= 0){
                st.insert(num);
            }else{
                maxi = max(maxi,num);
            }
        }

        if(st.empty()){
            return maxi;
        }else{
            for(int it : st){
                answer += it;
            }
        }

        return answer;
    }
};