class Solution {
public:
    bool detectCapitalUse(string word) {
        int up = 0;
        int down = 0;
        for(int i = 1 ; i<word.size() ; i++){
            if(isupper(word[i])){
                up++;
            }
            if(islower(word[i])){
                down++;
            }
        }
        if(up == word.size()-1){
            if(isupper(word[0])){
                return true;
            }
        }
        if(down == word.size()-1){
            return true;
        }
        return false;
        
    }
};