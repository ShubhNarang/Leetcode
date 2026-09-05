class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> minarray(nums.size());
        int max = nums[0];
        int min = INT_MAX;
        for(int i = nums.size()-1 ; i > -1 ; i--){
            if(min>nums[i]){
                min = nums[i];
            }
            minarray[i] = min;
        }
        int minn;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>max){
                max = nums[i];
            }
            minn = minarray[i];
            if(max-minn <=k){
                return i;       
            }
        }
        return -1;

        
    }
};