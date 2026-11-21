class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> a;
        for(int i =0 ; i <nums.size() ; i++){
            int k = nums[i];
            vector<int> b;
            while(k!=0){
                b.push_back(k%10);
                k = k/10;
            }
            for(int j = b.size()-1; j>=0;j--){
                a.push_back(b[j]);
            }
        }
        return a;
    }
};