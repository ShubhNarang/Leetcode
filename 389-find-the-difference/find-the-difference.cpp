class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        int a = 1;
        for(auto i:s){
            mp[i]++;
        }
        for(int i = 0 ; i<t.size() ; i++){
            if(mp[t[i]] > 0){
                mp[t[i]]--;
            }
            else{
                return t[i];
            }

        }
        return 'a';
        
    }
};