class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n*n;
        unordered_map<int,int> hash;
        int a=-1;
        int b=-1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                hash[grid[i][j]]++;
            }
        }
        for(int i=1; i<=N; i++){
            if(hash[i]==2){
                a = i;
            }
            if(hash[i]==0){
                b = i;
            }
            if(a!=-1 && b!=-1){
                break;
            }
        }
        return {a,b};
    }
};