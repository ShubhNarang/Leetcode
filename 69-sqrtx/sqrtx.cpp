class Solution {
public:
    int mySqrt(int x) {

        int start = 0;
        int end = x;
        int mid = start + (end - start)/2;
        int ans = 0;
        while(start <= end){
            if(mid != 0 && mid > INT_MAX/mid){
                end = mid - 1;
            }
            else if((mid * mid) > x){
                end = mid - 1;
                }
            else if((mid * mid) < x){
                start = mid + 1;
                ans = mid;
            }
            else if ((mid * mid) == x){
                ans = mid;
                return ans;
            }
            mid = start + (end - start)/2;
        }
        return ans;


    }
};