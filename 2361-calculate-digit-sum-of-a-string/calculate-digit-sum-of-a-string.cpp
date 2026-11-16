class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size()<=k){
            return s;
        }
        string p = "";
        for(int i = 0 ; i < s.size() ; i=i+k){
            string a = s.substr(i,k);
            int ans = 0;
            for(int j = 0 ; j < a.size();j++){
                ans = ans + a[j]-'0';
            }
            p = p + to_string(ans);
        }
        s = p;
        return digitSum(s,k);
    }
};