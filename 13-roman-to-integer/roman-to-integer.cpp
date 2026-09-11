class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {{'I', 1},
        {'V', 5},
        {'X', 10},
        {'L',50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};
        int sum = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(i>0 && (s[i] == 'V' || s[i] == 'X') && s[i-1] == 'I'){
                sum = sum - 2*mp[s[i-1]] + mp[s[i]];
            }
            else if(i>0 && (s[i] == 'L' || s[i] == 'C') && s[i-1] == 'X'){
                sum = sum - 2*mp[s[i-1]] + mp[s[i]];
            }
            else if(i>0 && (s[i] == 'M' || s[i] == 'D') && s[i-1] == 'C'){
                sum = sum - 2*mp[s[i-1]] + mp[s[i]];
            }
            else{
                sum = sum + mp[s[i]];
            }
        }
        return sum;

        
    }
};