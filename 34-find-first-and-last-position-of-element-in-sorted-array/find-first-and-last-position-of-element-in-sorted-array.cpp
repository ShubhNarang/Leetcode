class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = start +(end-start)/2;
        int first = -1;
        int last = -1;
        vector<int> vec;

        if(nums.size() == 0){
            return {-1,-1};
        }


        while(start<=end){
            if(nums[mid]== target){
                first = mid;
                end = mid-1;    
            }
            else if(nums[mid]> target){
                end = mid-1;
            }
            else if(nums[mid]< target){
                start = mid+1;
            }
            mid = start +(end-start)/2;

        }
        start = 0;
        end = nums.size()-1;
        mid = start +(end-start)/2;

        while(start<=end){
            if(nums[mid]== target){
                last = mid;
                start = mid+1;    
            }
            else if(nums[mid]> target){
                end = mid-1;
            }
            else if(nums[mid]< target){
                start = mid+1;
            }
            mid = start + (end-start)/2;

        }
        vec.push_back(first);
        vec.push_back(last);
        return vec;
    }
};