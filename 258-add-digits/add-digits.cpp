class Solution {
public:
    int addDigits(int nums) {
        int a = 0;
        int sum = 0;
        while(nums!=0){
            a = nums%10;
            sum = sum + a;
            nums = nums/10;
            if(nums == 0 && sum>=10){
                nums = sum;
                sum = 0;
            }
        }
        return sum;
        
    }
};