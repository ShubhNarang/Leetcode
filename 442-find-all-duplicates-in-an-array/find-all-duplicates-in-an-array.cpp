class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        set<int> s;
        for(int i=0 ; i<nums.size()-1;i++){
            if(nums[i] == nums[i+1] ){
                s.insert(nums[i]);
            }
        }
        vector<int> v(s.begin(), s.end());
        return v;
    }
};