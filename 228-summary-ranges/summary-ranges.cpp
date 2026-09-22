class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> c;
        for(int i = 0 ; i<nums.size() ; i++){
            int k = i;
            int a = nums[i];
            while(i<nums.size()-1 && nums[i+1] == nums[i]+1){
                i++;
            }
            int b = nums[i];
            string d;
            if(k==i){
                d = format("{}",a);
            }
            else{
                d = format("{}->{}",a,b);
            }
            c.push_back(d);
        }
        return c;
        
    }
};