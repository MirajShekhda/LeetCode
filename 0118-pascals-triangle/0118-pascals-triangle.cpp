class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        answer.push_back({1});
        if(numRows == 1) return answer;
        answer.push_back({1,1});
        if(numRows == 2) return answer;

        int n = numRows - 2;
        while(n){
            vector<int> prev = answer.back();
            vector<int> v;
            v.push_back(1);
            for(int i = 0; i<prev.size()-1; i++){
                v.push_back(prev[i] + prev[i+1]);
            }
            v.push_back(1);
            answer.push_back(v);
            n--;
        }
        return answer;
    }
};