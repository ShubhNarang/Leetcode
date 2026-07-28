class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        int start = 0 ; 
        int end = matrix.size()-1;
        int middle = start + (end-start)/2;
        if(matrix[0][0]>target){
            return false;
        }
        if(matrix[matrix.size()-1][matrix[0].size()-1]<target){
            return false;
        }
        while(start<=end){
            if(matrix[middle][0]==target){
                return true;
            }
            else if(matrix[middle][0]>target){
                end = middle-1;;
            }
            else if(matrix[middle][0]<target){
                start = middle+1;
            }
            middle = start + (end-start)/2;
        }
        int start2 = 0;
        int end2 = matrix[0].size()-1;
        int middle2 = start2 + (end2-start2)/2;

        while(start2<=end2){
            if(matrix[end][middle2]==target){
                return true;
            }
            else if(matrix[end][middle2]<target){
                start2 = middle2+1;
            }
            else if(matrix[end][middle2]>target){
                end2 = middle2-1;
            }
            middle2 = start2 + (end2-start2)/2;
        }
        return false;
    }
};