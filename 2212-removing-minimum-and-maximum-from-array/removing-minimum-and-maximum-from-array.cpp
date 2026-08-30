class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxindex = 0;
        int max = INT_MIN;
        int minindex = 0;
        int min1 = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > max){
                max = nums[i];
                maxindex = i;
            }
            if(nums[i] < min1){
                min1 = nums[i];
                minindex = i;
            }
        }
        if(minindex>maxindex){
            swap(minindex,maxindex);
        }
        int left = maxindex+1;
        int right = nums.size() - minindex;
        int center = (minindex+1) + (nums.size()-maxindex);

        int a = min({left,right,center});
        return a;
        
        
    }
};