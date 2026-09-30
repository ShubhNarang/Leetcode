class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int a = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            a = arr[i]+a;
        }
        if(a%3!=0){
            return false;
        }
        int sum = 0;
        int count = 0;
        
        for(int i = 0 ; i < arr.size();i++){
            sum= sum + arr[i];
            if(sum == a/3){
                count++;
                sum = 0;
            }
        }
        if(count >= 3){
            return true;
        }
        return false;
        
    }
};