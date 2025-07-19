class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string> ans;
        ans.push_back(folder[0]);

        for(int i=1; i<folder.size(); i++){
            string temp = ans.back();
            temp += '/';
            if(folder[i].find(temp) != 0){
                ans.push_back(folder[i]);
            }
        }

        return ans;
    }
};