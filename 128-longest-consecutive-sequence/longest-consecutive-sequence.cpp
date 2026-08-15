class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        int longest = 1;
        unordered_set s(nums.begin() , nums.end());
        for(auto i:s){
            if(s.find(i-1) == s.end()){
                int count = 1;
                int x = i;
                while(s.find(x+1) != s.end()){
                    x=x+1;
                    count++;
                }
                longest = max(longest,count);
            }
        }
        return longest;

        
    }
};