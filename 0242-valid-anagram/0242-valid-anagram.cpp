class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);

        for(char ch : s){
            v[ch - 'a']++;
        }

        for(char ch : t){
            if(v[ch - 'a'] == 0){
                return false;
            }
            v[ch - 'a']--;
        }

        for(int it : v){
            if(it != 0){
                return false;
            }
        }

        return true;
    }
};