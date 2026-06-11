class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> vec=nums;
        vec.reserve(2 * nums.size());
        for(int i:nums){
            vec.push_back(i);
        }
        return vec;
        
    }
};