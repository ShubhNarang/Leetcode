class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1;
        int end = num-1;
        int mid = start + (end - start)/2;
        if(num == 1){
            return true;
        }
        while(start<=end){
            if(mid == num/mid){
                if(num % mid == 0){
                    return true;
                }
                end = mid - 1;
            }
            if(mid < num/mid){
                start = mid+1;
            }
            if(mid > num/mid){
                end =  mid-1;
            }
            mid = start + (end - start)/2;
        }
        return false;

        
    }
};