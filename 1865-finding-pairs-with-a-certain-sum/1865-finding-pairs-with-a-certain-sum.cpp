class FindSumPairs {
private:
    vector<int> v1,v2;
    unordered_map<int,int> mp2,mp1;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        // O(n) or O(m)
        v1 = nums1; v2 = nums2;
        for(auto x : v2) mp2[x]++;
        for(auto x : v1) mp1[x]++;
    }
    
    void add(int index, int val) {
        // O(1) or O(logn)
        mp2[v2[index]]--;
        v2[index] += val;
        mp2[v2[index]]++;
    }
    
    int count(int tot) {
        // O(m) 
        int ans = 0;
        for(auto &[k,v] : mp1){
            int rem = tot - k;
            if(mp2.count(rem) > 0)
                ans += (v * mp2[rem]);
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */