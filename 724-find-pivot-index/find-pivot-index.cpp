class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size() ; i++){
            int sumright=0;
            int sumleft=0;
            for(int j = 0 ; j < i  ; j++){
                sumleft=sumleft + nums[j];
            }
            for(int j = i+1 ; j < nums.size()  ; j++){
                sumright = sumright + nums[j];
            }
            if(sumright==sumleft){
                return i;
            }
        }
        return -1;
        
    }
};