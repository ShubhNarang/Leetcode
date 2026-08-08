class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int a = matrix.size();
        int b = matrix[0].size();
        vector<int> v;
        int indexa = 0;
        int indexb=1;
        for(int i = 0 ; i<a ; i++){
            for(int j = 0 ; j < b ; j++){
                if(matrix[i][j]==0){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        for(int i = 0 ; i <  v.size()/2 ; i++){
            for(int j = 0 ; j < matrix.size() ; j++){
                matrix[j][v[indexb]] = 0;
            }
            indexb+=2;
        }

        for(int i = 0 ; i <  v.size()/2 ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                matrix[v[indexa]][j] = 0;
            }
            indexa+=2;
        }
        
    }
};