class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for(int i = 2 ; i <num+1;i++){
            int p = i;
            int sum = 0;
            while(p!=0){
                sum += p%10;
                p = p/10;
            }
            if(sum%2==0){
                count++;
            }
        }
        return count;
    }
};