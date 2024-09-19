class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return n==1;
        long long ans = 4;
        while(ans<n){
            ans = ans * 4;
        }
        return ans==n;
    }
};