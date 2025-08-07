class Solution {
public:
    void solve(int col, vector<string>& board, vector<vector<string>>& answer, vector<int>& leftrow, vector<int>& upperDiagnol, vector<int>& lowerDiagnol, int n){
        if(col == n){
            answer.push_back(board);
            return;
        }

        for(int row = 0; row<n; row++){
            if(leftrow[row]==0 && lowerDiagnol[row+col]==0 && upperDiagnol[n-1 + col-row]==0){
                board[row][col] = 'Q';
                leftrow[row] = 1; 
                lowerDiagnol[row+col] = 1;
                upperDiagnol[n-1 + col-row] = 1;
                solve(col+1, board, answer, leftrow, upperDiagnol, lowerDiagnol, n);
                board[row][col] = '.';
                leftrow[row] = 0; 
                lowerDiagnol[row+col] = 0;
                upperDiagnol[n-1 + col-row] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> answer;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0; i<n; i++){
            board[i] = s;
        }

        vector<int> leftrow(n,0);
        vector<int> upperDiagnol(2*n-1,0);
        vector<int> lowerDiagnol(2*n-1,0);

        solve(0, board, answer, leftrow, upperDiagnol, lowerDiagnol, n);

        return answer;
    }
};