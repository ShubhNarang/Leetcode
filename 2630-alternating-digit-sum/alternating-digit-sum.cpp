class Solution {
public:
    int alternateDigitSum(int n) {
        int b = 0;
        int sum = 0;
        while(n!=0){
            if(b%2==0){
                sum += n%10;
            }
            else{
                sum -= n%10;
            }
            b++;
            n=n/10;
        }
        if(b%2==0){
            return -sum;
        }
        return sum;

        
    }
};