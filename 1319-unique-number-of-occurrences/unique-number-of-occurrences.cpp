class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto i:arr){
            m[i]++;
        }
        set<int> s;
        for(auto i:m){
            if(s.count(i.second)==1){
                return 0;
            }
            s.insert(i.second);
        }
        return 1;        
        
    }
};