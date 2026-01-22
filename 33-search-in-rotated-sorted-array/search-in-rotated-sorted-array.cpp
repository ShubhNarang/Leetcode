int getpivot(vector<int> arr , int n){
    
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;

}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int a = getpivot(nums , nums.size());
        if(nums[a] <= target && target <= nums[end]){
            start = a;
            end = end;
        } else {
            start = 0;
            end = a-1;
        }
        while (start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                end = mid - 1;   
            }
            else if(nums[mid] < target){
            start = mid + 1;}
            }
        return -1;
    }
};