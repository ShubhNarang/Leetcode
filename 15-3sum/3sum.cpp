class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> a;
        for(int i = 0 ; i <nums.size()-1 ;i++){
            int start = i + 1;
            int end = nums.size()-1;
            int sum = nums[i];
            while( start < end){
                if(nums[start]+nums[end]+sum > 0){
                    end--;
                }
                else if(nums[start]+nums[end]+sum < 0){
                    start++;
                }
                else if(nums[start]+nums[end]+sum == 0){
                    a.push_back({sum,nums[start],nums[end]});
                    start = start + 1;
                }
            }
        }
        set<vector<int>> s(a.begin(), a.end());
        vector<vector<int>> k(s.begin(), s.end());
        return k;
    }
};