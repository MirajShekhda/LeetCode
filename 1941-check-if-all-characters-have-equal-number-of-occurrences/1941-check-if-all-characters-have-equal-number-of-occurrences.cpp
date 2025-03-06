class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> hash;
        for(int i=0; i<s.size(); i++){
            hash[s[i]]++;
        }
        int cnt = hash[s[0]];
        for(auto[ch,num] : hash){
            if(cnt != num){
                return false;
            }
        }
        return true;
    }
};