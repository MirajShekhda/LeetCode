class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        else if(n==2) return 2;
        else{
            int first = 1, second = 2;
            for(int i=3; i<=n; i++){
                int temp = first+second;
                first = second;
                second = temp;
            }
            return second;
        }
    }
};