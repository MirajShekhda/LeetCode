class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long N = n*n;
        int a=-1;
        int b=-1;
        long long sumG =0;
        long long sqG =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                sumG += grid[i][j];
                sqG += grid[i][j]*grid[i][j]; 
            }
        }
        long long sum = (N*(N+1))/2;
        long long sqsum = (N*(N+1)*(2*N+1))/6;

        b = ((sum - sumG)+((sqsum-sqG)/(sum - sumG)))/2;
        a = sumG + b - sum;

        return {a,b};
    }
};