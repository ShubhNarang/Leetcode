class Solution {
public:
    bool checkString(string s) {
        bool b = false;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='b'){
                b = true;
            }
            if(b==true && s[i]=='a'){
                return false;
            }
        }
        return true;
        
    }
};