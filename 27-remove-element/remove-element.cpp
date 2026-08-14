class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end){
            if(nums[end] == val){
                end--;
                continue;
            }
            else if(nums[start]== val){
                swap(nums[start],nums[end]);
            }
            start++;
        }
        return start;
        
    }
};