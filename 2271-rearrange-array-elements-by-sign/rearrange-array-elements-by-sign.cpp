class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        for(int i:nums){
            if(i<0){
                neg.emplace_back(i);
            }
            else{
                pos.emplace_back(i);
            }
        }
        for(int i=0 ; i<(nums.size()/2) ; i++){
            ans.emplace_back(pos[i]);
            ans.emplace_back(neg[i]);
        }
        return ans;
    }
};