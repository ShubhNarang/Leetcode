class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1] != 9){
            digits[digits.size()-1] = digits[digits.size()-1] + 1;
            return digits;
        }
        else{
            int i = digits.size()-1;
            while(i>-1 && digits[i] == 9 ){
                digits[i] = 0;
                i--;
            }
            if(i>-1){digits[i] = digits[i]+1;}
            else{
                vector<int> v(digits.size()+1);
                v[0]=1;
                return v;
            }

        }
        return digits;
        
    }
};