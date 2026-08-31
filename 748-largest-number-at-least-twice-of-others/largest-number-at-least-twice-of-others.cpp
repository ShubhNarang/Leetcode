class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = nums[0]; 
        int largestindex = 0;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i]>largest){
                largest = nums[i];
                largestindex = i;
            }  
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]*2>largest && nums[i] != largest){
                return -1;
            }  
        }
        return largestindex;
        
        
    }
};