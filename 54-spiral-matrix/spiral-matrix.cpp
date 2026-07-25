class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int layers = (min(matrix.size(), matrix[0].size()) + 1) / 2;
        for(int k = 0 ; k < layers ; k++){
            int i = k;
            int j = k;
            while(j < matrix[0].size()-k){
                v.push_back(matrix[i][j]);
                j++;
            }
            if(matrix.size()*matrix[0].size()==v.size()){
                return v;
            }
            j--;
            i++;
            while(i<matrix.size()-k){
                v.push_back(matrix[i][j]);
                i++;
            }
            if(matrix.size()*matrix[0].size()==v.size()){
                return v;
            }
            i--;
            j--;
            while(j >= k){
                v.push_back(matrix[i][j]);
                j--;
            }
            if(matrix.size()*matrix[0].size()==v.size()){
                return v;
            }
            j++;
            i--;
            while(i>k){
                v.push_back(matrix[i][j]);
                i--;
            }
            if(matrix.size()*matrix[0].size()==v.size()){
                return v;
            }
            i++;


        }
        return v;
    }
};