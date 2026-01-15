class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = nums.size();
        int sum = 0;
        for(int i=0 ; i<a ; i++){

            sum = nums[i]^sum ;
        }
        return sum;
    }
};