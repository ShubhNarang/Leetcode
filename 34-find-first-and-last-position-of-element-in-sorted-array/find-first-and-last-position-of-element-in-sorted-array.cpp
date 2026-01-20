class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int a = nums.size();
        int start = 0;
        int end = a - 1;
        int mid = start + (end - start)/2;
        vector<int> v;
        if(a == 0){
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        while (start <= end){

            if(nums[mid] == target){
                int temp = mid;
                int temp1 = mid;
                while(temp < nums.size() && nums[temp] == target){
                    temp++;
                }
                while(temp1 >= 0 && nums[temp1] == target){
                    temp1--;
                }
                v.push_back(temp1+1);
                v.push_back(temp-1);

                return v;
            }
            else if(nums[mid] > target ){
                end = mid - 1;
            }
            else if(nums[mid] < target ){
                start = mid + 1;
            }

            mid = start + (end - start)/2;

        }
        v.push_back(-1);
        v.push_back(-1);
        return v;
        
    }
};