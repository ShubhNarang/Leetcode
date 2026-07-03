int getpivot(vector<int> arr , int t){
    int start = 0;
    int end = t-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return mid;

}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int pivot = getpivot(nums ,nums.size());
        int start = 0;
        int end = nums.size()-1;
        if((target >= nums[pivot]) && (target <= nums[end])){
            start = pivot;
        }
        else{
            end = pivot - 1;
        }
        while(start <= end){
            int mid = start + (end-start)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
            else if(target < nums[mid]){
                end = mid-1;
            }
            
        }
        return -1;
    }
};