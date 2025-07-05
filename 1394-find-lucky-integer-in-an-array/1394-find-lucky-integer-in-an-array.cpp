class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i=0; i<arr.size(); i++){
            mpp[arr[i]]++;
        }
        int ans = -1;
        for(auto [v,f] : mpp){
            if(v==f){
                ans = max(ans,v);
            }
        }
        return ans;
    }
};