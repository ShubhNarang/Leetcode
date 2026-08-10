class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> v(52);
        int count = 0;
        for(int i = 0 ; i < word.size() ; i++){
            if(isupper(word[i]) ){
                v[(word[i]-65)*2+1] = 1;
            }
            if(islower(word[i]) && v[(word[i]-97)*2+1] == 0){
                v[(word[i]-97)*2] = 1;
            }
            if(islower(word[i]) && v[(word[i]-97)*2+1] == 1){
                v[(word[i]-97)*2] = 0;
            }
        }
        for(int i = 0 ; i < v.size() ; i+=2){
            if((v[i] & v[i+1]) == 1){
                count++;
            }
        }
        return count;
        
    }
};