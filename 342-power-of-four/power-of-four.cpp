class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1){
            return true;
        }
        int a = 1;
        for(int i = 1 ; i < 16 ; i++){
            a = a*4;
            if(n == a){
                return true;
            }
        }
        return false;

        
    }
};