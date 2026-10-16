class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        ans.push_back(nums[nums.size()-1]);
        int p = 0;
        for(int i = nums.size()-1 ; i>=0 ;i--){
            if(ans[p]!=nums[i] && p<k-1){
                p++;
                ans.push_back(nums[i]);
            }
            if(p==k-1){
                break;
            }
        }
        return ans;

        
    }
};