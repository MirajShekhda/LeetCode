class Solution {
public:
    bool isPrime(int num){
        if(num == 1){
            return false;
        }
        for(int i=2; i*i<=num; i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        for(int i=left; i<=right; i++){
            if(isPrime(i)){
                if(!primes.empty() && i-primes.back() <= 2){
                    return {primes.back(),i};
                }
                primes.push_back(i);
            }
        }
        int mindiff = INT_MAX;
        vector<int> ans = {-1,-1};
        for(int i=1; i<primes.size(); i++){
            int diff = primes[i]-primes[i-1];
            if(diff<mindiff){
                mindiff = diff;
                ans = {primes[i-1],primes[i]};
            }
        }
        return ans;
    }
};