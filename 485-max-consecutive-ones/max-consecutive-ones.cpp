class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a=0;
        int temp=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                a++;
                if(a>temp){
                    temp = a;
                }
            }
            else{
                a=0;  
            }   
        }
        return temp;
    }
};