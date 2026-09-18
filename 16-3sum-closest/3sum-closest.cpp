class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int c = INT_MAX;
        int d = 0;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            int start = i+1;
            int end = nums.size()-1;
            while(start<end){
                int a = nums[i]+nums[start]+nums[end];
                int b = abs(a-target);
                if(b<c){
                    d = a;
                    c = b;
                }
                if(a>target){
                    end--;
                }
                else if(a<target){
                    start++;
                }
                else{
                    return a;
                }
            }
        }
        return d;
        
    }
};