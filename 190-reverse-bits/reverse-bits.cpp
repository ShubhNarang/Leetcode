class Solution {
public:
    int reverseBits(int n) {

        int temp = 0 , a ;
        for(int  i = 0 ; i < 32; i++){
            a = n&1;
            n = n>>1;
            temp = temp << 1;
            temp = temp | a;
        }
        return temp;
        
    }
};