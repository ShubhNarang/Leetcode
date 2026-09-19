class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a(nums1.size()+nums2.size());
        for(int i = 0 ; i < nums1.size()+nums2.size();i++){
            if(i<nums1.size()){
                a[i] = nums1[i];
            }
            else{
                a[i] = nums2[i-nums1.size()];
            }
        }
        sort(a.begin(),a.end());
        if(a.size()%2!=0){
            return (double)a[a.size()/2];
        }
        else{
            return (double)(a[a.size()/2]+a[a.size()/2-1])/2;
        }
        
    }
};