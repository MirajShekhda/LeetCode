class Solution {
public:
    int maxDifference(string s) {
        int n = s.length();
        vector<int> count(26);
        for (char c : s){
            count[c - 'a']++;
        }
        int maxOdd = 0;
        int minEven = n+1;

        for(int i=0; i<26; i++){
            if(count[i]==0) continue;

            if(count[i]%2 == 0){
                minEven = min(minEven, count[i]);
            }else{
                maxOdd = max(maxOdd, count[i]);
            }
        }
        return maxOdd-minEven;
    }
};