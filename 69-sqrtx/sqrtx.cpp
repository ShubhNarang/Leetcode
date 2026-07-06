class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        int mid = start +(end -start)/2;
        int ans = 0;
        if(x==1){
            return 1;
        }
        if(x==0){
            return 0;
        }
        while(start<=end){
            if(mid==x/mid){
                return mid;
                }
            else if(mid>x/mid){
                end = mid-1;
            }
            else if(mid<x/mid){
                ans = mid;
                start = mid + 1;
            }
            mid = start +(end -start)/2;

        }
        return ans;

        
    }
};