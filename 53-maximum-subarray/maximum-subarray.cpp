class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int total = 0;
        for (int j = 0 ; j<nums.size() ; j++){
            total = total + nums[j];
            if(total>max){
                max = total;
            }
            if(total<0){
                total = 0;
            }
            
        }
        return max;
    }
};