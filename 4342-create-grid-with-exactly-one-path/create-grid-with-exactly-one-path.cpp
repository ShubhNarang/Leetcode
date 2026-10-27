class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> v;
        for(int i = 0 ; i < m ;i++){
            v.push_back(".");
            for(int j = 1 ; j < n ;j++){
                v[i]+='#';
            }     
        }
        for(int j = 0 ; j < v[m-1].size() ;j++){
            v[m-1][j]='.';
        } 

        return v; 
        
    }
};