class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> vec;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
	int i=0;
	int j=0;
	while(i<size(nums1) && j<size(nums2)){
		if(nums1[i] < nums2[j]){
			i++;
		}
		else if(nums1[i] == nums2[j]){
			vec.insert(nums1[i]);
			i++;
			j++;
		}
		else if(nums1[i] > nums2[j]){
			j++;
		}
	}
    vector<int> v(vec.begin(), vec.end());
	return v;
}
};