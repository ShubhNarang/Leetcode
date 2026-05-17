class Solution {
public:
    int reverse(int x) {
        int a,b = 0;
        while(x!=0){
            a = x%10;
            if ( b > INT_MAX/10){
                return 0 ;
            }
            if ( b < INT_MIN/10){
                return 0 ;
            }
            b = a + (b*10);
            x = x/10;
        }
        return b;
    }
};