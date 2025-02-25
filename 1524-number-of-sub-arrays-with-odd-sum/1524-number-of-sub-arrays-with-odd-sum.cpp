class Solution {
public:
    const int MOD = 1e9 + 7;
    int numOfSubarrays(vector<int>& arr) {
        long long ans = 0;
        long long odd = 0,even=1;
        long long sumAcc = 0;
        for(int i=0; i<arr.size(); i++){
            sumAcc += arr[i];
            if(sumAcc%2 == 0){
                ans = (ans+odd)%MOD;
                even++;
            }else{
                ans = (ans+even)%MOD;
                odd++;
            }
        }
        return ans;
    }
};