class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int b = nums.size();
        //Positive    
        int start = 0;
        int end = nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]>0){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        int c = b - start;
        if(c == nums.size()){
            return c;
        }

        //Negative
        start = 0;
        end = nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]<0){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        int d = end+1;
        int e = max(c,d);

        return e;
    
        
    }
};