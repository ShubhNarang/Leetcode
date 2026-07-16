class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start<end){
            if(isalnum(s[start])==false){
                start++;
            }
            else if(isalnum(s[end])==false){
                end--;
            }
            else{
                if(tolower(s[start])!=tolower(s[end])){
                    return false;
                }
                start++;
                end--;
            }
        }
        return true;
    }
};