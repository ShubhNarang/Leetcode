class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4){
            return {};
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        for(int i = 0 ; i <nums.size()-2;i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            for(int j = i+1 ; j < nums.size()-1;j++){
                int start = j+1;
                int end = nums.size()-1;
                if(j > i+1 && nums[j] == nums[j-1]){
                    continue;
                }
                while(start<end){
                    long long sum = (long long)nums[i]+nums[j]+nums[start]+nums[end];
                    if(sum == target){
                        v.push_back({nums[i],nums[j],nums[start],nums[end]});
                        start++;
                        end--;

                        while(start<end && nums[start] == nums[start-1]){
                            start++;
                        }
                        while(start<end && nums[end] == nums[end+1]){
                            end--;
                        }
                    }
                    else if(sum > target){
                        end--;
                    }
                    else if(sum < target){
                        start++;
                    }
                }
            }
        }
        return v;
        
    }
};