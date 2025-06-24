class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> answer(n,0);

        int PC = 0;
        int PS = 0;
        for(int i=0; i<n; i++){
            answer[i] = PC*i - PS;
            if(boxes[i] == '1'){
                PC += 1;
                PS += i;
            }
        }

        int SC = 0;
        int SS = 0;
        for(int i=n-1; i>=0; i--){
            answer[i] += SS - SC*i;
            if(boxes[i] == '1'){
                SC += 1;
                SS += i;
            }
        }
        return answer;
    }
};