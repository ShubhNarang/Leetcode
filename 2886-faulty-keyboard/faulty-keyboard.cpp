class Solution {
public:
    string finalString(string s) {
        string a = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'i'){
                reverse(a.begin(), a.end());
                continue;
            }
            a = a + s[i];
        }
        return a;        
    }
};