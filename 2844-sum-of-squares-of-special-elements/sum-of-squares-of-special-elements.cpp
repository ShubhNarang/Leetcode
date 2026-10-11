class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int a = 0;
        for(int i = 0 ; i < nums.size() ;i++ ){
            if(nums.size()%(i+1)==0){
                a = (nums[i]*nums[i]) + a;
            }
        }
        return a;
        
    }
};