class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(auto& it : strs){
            string word = it;
            sort(word.begin(),word.end());
            mpp[word].push_back(it);
        }

        vector<vector<string>> answer;
        for(auto& it : mpp){
            answer.push_back(it.second);
        }

        return answer;
    }
};