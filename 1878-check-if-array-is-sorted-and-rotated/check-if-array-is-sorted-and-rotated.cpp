class Solution {
public:
    bool check(vector<int>& nums) {
        int temp = 0;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i-1]<=nums[i]){
                continue;
            }
            else{
                temp = i;
            }
        }
        if(temp==0){
            return true;
        }
        
        vector<int> v(nums.size());
        for(int i=0 ; i<nums.size() ; i++){
            v[(i-temp+nums.size()) % nums.size()] = nums[i];
        }
        
        temp = 0;
        for(int i=1 ; i<nums.size() ; i++){
            if(v[i-1]<=v[i]){
                continue;
            }
            else{
                temp = i;
            }
        }
        if(temp==0){
            return true;
        }
        return false;

    }
};