class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int i=0;
        int j=0;
        int answer = 0;
        while(i<players.size() && j<trainers.size()){
            if(players[i]<=trainers[j]){
                answer++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return answer;
    }
};