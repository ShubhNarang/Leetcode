class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum(nums.size());
        vector<int> rightsum(nums.size());
        int left = 0 ;
        int right = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            leftsum[i]=left;
            left = left + nums[i];
            rightsum[nums.size()-i-1]=right;
            right = right + nums[nums.size()-i-1];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            nums[i]=abs(leftsum[i]-rightsum[i]);
        }
        return nums;

        
    }
};