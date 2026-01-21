class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i = 0 ; i<nums.size() ; i++){
            int a = 0;
            int b = 0;
            for(int j = 0 ; j<i ; j++){
                    a = nums[j] + a;
            }
            for(int j = nums.size()-1 ; j>i ; j--){
                    b = nums[j] + b;
            }
            if(a == b){
                return i;
            }

            
        }
        return -1;
        
    }
};