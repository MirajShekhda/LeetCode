class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return n==1;
        long long ans = 3;
        while(ans<n){
            ans = ans * 3;
        }
        return ans==n;
    }
};