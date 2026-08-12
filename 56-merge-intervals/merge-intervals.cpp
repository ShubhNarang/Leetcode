class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int min = intervals[0][0];
        int max = intervals[0][1];
        vector<vector<int>> v;
        for(int i = 0 ; i<intervals.size()-1 ; i++){
            int c = intervals[i+1][0];
            int d = intervals[i+1][1];
            if(max>=c){
                if(max<d){
                    max = d;
                }
            }
            else{
                v.push_back({min,max});
                max = d;
                min = c;
            }
        }
        v.push_back({min,max});
        return v;
    }
};