class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3){
            return -1;
        }
        long long max = LLONG_MIN;
        long long min = LLONG_MAX;
        for(int i:nums){
            if(i>max){
                max = i;
            }
            if(i<min){
                min = i;
            }
        }
        for(int i:nums){
            if(i!=max && i!=min){
                return i;
            }
        }
        return 0;
        
    }
};