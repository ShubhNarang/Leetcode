class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> a(nums.size()+1);
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]%k == 0){
                int b = nums[i]/k;
                if (b >= 1 && b <= nums.size()) {
                    a[b] = 1;
                }       
            }
        }
        for(int i = 1 ; i < nums.size()+1 ; i++){
            if(a[i]== 0){
                return k*i;
            }
        }
        return k * (nums.size() + 1);;
        
    }
};