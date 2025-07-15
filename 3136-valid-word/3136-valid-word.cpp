class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3){
            return false;
        }else{
            bool isVowel = false;
            bool isConst = false;
            bool isdn = true;
            for(int i=0 ; i<word.size(); i++){
                if(!isalnum(word[i])){
                    isdn = false;
                }
                char c = word[i];
                if(isalpha(c)){
                    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                        isVowel = true;
                    }else{
                        isConst = true;
                    }
                }
            }
            return (isdn & isVowel & isConst);
        }
    }
};