class Solution {
private:
    int removeSubStr(string s, string pattern, int max, int min){
        int n = s.size();
        int answer = 0;
        stack<char> st;

        for(int i=0; i<n; i++){
            if(!st.empty() && st.top() == pattern[0] && s[i] == pattern[1]){
                st.pop();
                answer += max;
            }else{
                st.push(s[i]);
            }
        }
        
        string rem = "";
        while(!st.empty()){
            rem += st.top();
            st.pop();
        }
        reverse(rem.begin(),rem.end());

        for(int i=0; i<rem.size(); i++){
            if(!st.empty() && st.top() == pattern[1] && rem[i] == pattern[0]){
                st.pop();
                answer += min;
            }else{
                st.push(rem[i]);
            }
        }

        return answer;
    }
public:
    int maximumGain(string s, int x, int y) {
        if(x > y){
            return removeSubStr(s,"ab",x,y);
        }else{
            return removeSubStr(s,"ba",y,x);
        }
    }
};