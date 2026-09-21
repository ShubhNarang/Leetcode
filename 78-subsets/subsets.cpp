class Solution {
public:
    void Ts(vector<int>& nums,vector<int>& ans,int i, vector<vector<int>>& total){
        if(i == nums.size()){
            total.push_back(ans);
            return;
            }
        ans.push_back(nums[i]);
        Ts(nums,ans,i+1,total);
        ans.pop_back();
        Ts(nums,ans,i+1,total);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> total;
        vector<int> ans;
        Ts(nums,ans,0,total);
        return total;
    }
};