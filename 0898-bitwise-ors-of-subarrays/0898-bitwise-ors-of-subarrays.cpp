class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> answer;
        unordered_set<int> prev;

        for(int num : arr){
            unordered_set<int> curr;
            curr.insert(num);

            for(int prevOR : prev){
                curr.insert(num | prevOR);
            }

            prev = curr;
            answer.insert(curr.begin(),curr.end());
        }

        return answer.size();
    }
};