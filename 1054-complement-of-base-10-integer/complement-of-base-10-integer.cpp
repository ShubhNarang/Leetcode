class Solution {
public:
    int bitwiseComplement(int n) {
        int a = n ;
        int c = ~n , d = 0;
        if(n == 0){
            return 1 ;
        }
        while(a != 0){
            d = d<<1;
            d = d|1;
            a = a>>1;
        }
        int e = c&d;
        return e;


    }
};