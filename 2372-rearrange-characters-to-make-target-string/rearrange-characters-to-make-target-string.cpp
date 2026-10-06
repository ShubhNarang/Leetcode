class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> mp;
        unordered_map<char,int> vp;
        for(auto i:s){
            mp[i]++;
        }
        int min = INT_MAX;
        for(auto i:target){
            vp[i]++;
        }
        for(auto i:target){
            if(mp[i]/vp[i]<min){
                min = mp[i]/vp[i];
            }
        }
        return min;

        
    }
};