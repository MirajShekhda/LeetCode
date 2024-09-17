class Solution {
public:
    int reverse(int x) {
        int dup = x;
        long revers =0 ;
        while(x)
        {
            int lastd = x % 10;
            revers = revers * 10 + lastd;
            x=x/10;
        }
        if(revers>INT_MAX || revers<INT_MIN) return 0;
        return int(revers);
    }
};