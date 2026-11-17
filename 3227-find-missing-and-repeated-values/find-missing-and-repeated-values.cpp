class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> v((grid.size()*grid.size())+1);
        vector<int> ans(2);
        for(int i = 0 ; i < grid.size();i++){
            for(int j = 0 ; j <grid.size();j++){
                if(v[grid[i][j]]>0){
                    ans[0]=grid[i][j];
                }
                v[grid[i][j]]++;
            }
        }
        for(int i =1; i<v.size();i++){
            if(v[i]==0){
                ans[1]=i;
            }
        }
        return ans;
        
    }
};