class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int sum = 0;
        for(int i:nums){
            if(mp[i]<2){
                sum = sum + i;
            }
        }
        return sum;
        
    }
};