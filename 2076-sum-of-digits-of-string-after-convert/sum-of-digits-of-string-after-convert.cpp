class Solution {
public:
    int getLucky(string s, int k) {
        string a;
        for(int i= 0;i<s.size();i++){
            int q =s[i]-'a'+1;
            a += to_string(q);
        }
        int sum = 0;
        for(int i = 0 ; i < a.size() ; i++){
            sum += a[i]-'0';
        }
        for(int i = 0 ; i<k-1;i++){
            int ll = 0;
            while(sum!=0){
                ll+=sum%10;
                sum = sum/10;
            }
            sum = ll;
        }
        return sum;
    }
};