class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();

        sort(intervals.begin(),intervals.end(), compare);

        int prev = 0;
        int validIntervals = 1;

        for(int i = 1; i<n; i++){
            if(intervals[i][0] >= intervals[prev][1]){
                prev = i;
                validIntervals++;
            }
        }

        return n-validIntervals;
    }
};