class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long total = 0;
        for(int i = shifts.size()-1 ; i >=0 ; i--){
            total = total+shifts[i];
            s[i] = 'a'+ (s[i] - 'a' + total)% 26;
        }
        return s;
        
    }
};