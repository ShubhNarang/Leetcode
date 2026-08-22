class Solution {
public:
    char findTheDifference(string s, string t) {
        int a = 0;
        for(int i = 0 ; i < t.size() ; i++){
            if(i<t.size()-1){
                a = a^s[i];
            }
            a = a^t[i];
        }
        return a;
    }
};