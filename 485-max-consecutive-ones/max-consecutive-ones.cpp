class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> v;
        int a=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                a++;
            }
            else{
                v.push_back(a);
                a=0;  
            }   
        }
        v.push_back(a);
        int b = *max_element(v.begin(), v.end());
        return b;
    }
};