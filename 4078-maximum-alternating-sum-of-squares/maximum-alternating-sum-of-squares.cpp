class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0 ; i < nums.size();i++){
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        long long a = 0;
        if(nums.size()== 0){
            return 0;
        }
        if(nums.size()== 1){
            return nums[0]*nums[0];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(i>nums.size()/2-1){
                a = a+nums[i]*nums[i];
            }
            else{
                a = a - nums[i]*nums[i];
            }
        }
        return a;
        
    }
};