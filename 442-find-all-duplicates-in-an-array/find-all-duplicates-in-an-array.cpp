class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int a = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> myVector;
        for(int i = 0 ; i < a-1 ; i++){
            if(nums[i] == nums[i + 1]){
            myVector.push_back(nums[i]);
            }
        }
        return myVector;
        
    }
};