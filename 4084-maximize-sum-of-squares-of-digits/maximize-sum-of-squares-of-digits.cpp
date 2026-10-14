class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(num*9<sum){
            return "";
        }

        vector<int> a;
        int p = sum;
        int g = 0;
        for(int i=0 ; i < num ; i++){
            if(p <= 0){
                a.push_back(0);
            }
            else{
                a.push_back(9);
                if(a[i]>=p){
                    a[i] = a[i]-(9-p);
                    p = p - a[i];
                }
                else if(a[i]<p){
                    p = p - a[i];
                }
            }
        }
        string l;
        for(int i = 0 ; i < a.size() ; i++){
            l.push_back('0'+a[i]);
        }
        return l;
    }
};