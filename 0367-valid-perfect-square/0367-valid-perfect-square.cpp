class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return num==1;
        for(long long i=2; i<num; i++){
            if((i*i)==num){
                return true;
                break;
            }
        }
        return false;
    }
};