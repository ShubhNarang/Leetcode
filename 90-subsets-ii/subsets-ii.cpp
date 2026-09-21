class Solution {
public:

    void allset(vector<int>& nums,vector<int>& ans,int i , vector<vector<int>>& allsubset){
        if(i == nums.size()){
            allsubset.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        allset(nums,ans, i+1 ,allsubset);
        ans.pop_back();
        int a = i+1;
        while(a<nums.size() && nums[i]==nums[a]){
            i++;
            a++;
        }
        allset(nums,ans, i+1 ,allsubset);
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allsubset;
        vector<int> ans;
        allset(nums,ans, 0 ,allsubset);
        return allsubset;
        
    }
};