class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector<int> minitue(n);
        
       for(int i = 0; i < n; i++) {
            string time = timePoints[i];
            string hour = time.substr(0, 2);
            string minit = time.substr(3);
            int hours = stoi(hour);
            int mini = stoi(minit);
            minitue[i] = (hours * 60) + mini;
        }
        
        sort(minitue.begin(), minitue.end());

        int ans = INT_MAX;
        
        for(int i = 1; i < n; i++) {
            ans = min(ans, minitue[i] - minitue[i - 1]);
        }
        
        ans = min(ans, (24 * 60 - minitue[n - 1]) + minitue[0]);

        return ans;
    }
};