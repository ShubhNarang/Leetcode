class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element = 0;
        int digit = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            element = nums[i]+element;
            int a = nums[i];
            int b = 0;
            while(a !=0){
                b = a%10 + b;
                a = a/10; 
            }
            digit = digit + b;
            
            
        }
        return abs(element - digit);
        
    }
};