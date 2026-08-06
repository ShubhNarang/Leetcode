class Solution {
private:
    int product(int n){
        int pro = 1;
        int a = 0;
        while(n!=0){
            a = n%10;
            pro = pro * a;
            n = n/10;
            if(pro == 0){
                return 0;
            }
        }
        return pro;
    }
public:
    int smallestNumber(int n, int t) {
        while(true){
            int a = product(n);
            if(a%t==0){
                return n;
            }
            n++;
        }
        
    }
};