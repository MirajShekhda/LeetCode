class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mpp;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }
        int vowel = 0;
        int consonant = 0;
        for(auto& it : mpp){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' || it.first == 'u'){
                vowel = max(it.second, vowel);
            }else{
                consonant = max(it.second, consonant);
            }
        }
        return vowel+consonant;
    }
};