class Solution {
public:
    int calculateScore(int a, int b) {
        int count = 0;
        while(a){
            if(a&1){
                count++;
            }
            a=a>>1;
        }
        int count1 = 0;
        while(b){
            if(b&1){
                count1++;
            }
            b=b>>1;
        }
        if(count>=count1){
            count = count*count1;
        }
        else{
            count = count1/count;
        }
        return count;
        
    }
};