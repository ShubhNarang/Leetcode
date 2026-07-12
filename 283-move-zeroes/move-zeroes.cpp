class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0 ;
        while(i < nums.size() && nums[i] != 0){
            i++;
        }
        if(i == nums.size()){
            return;
        }
        int j = i+1;
        while(j < nums.size()){
            if(nums[j] != 0){
                swap(nums[j],nums[i]);
                i++;
                j++;
            }
            else if(nums[j] == 0){
                j++;
            }

            
        }
        

        
    }
};