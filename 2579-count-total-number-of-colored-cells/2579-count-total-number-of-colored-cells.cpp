class Solution {
public:
    long long coloredCells(int n) {
        long long ans;
        if(n==1){
            return 1;
        }
        ans = coloredCells(n-1) + (4*(n-1));
        return ans;
    }
};