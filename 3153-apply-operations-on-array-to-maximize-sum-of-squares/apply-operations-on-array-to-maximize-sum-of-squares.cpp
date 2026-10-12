class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        vector<bitset<32>> a;
        vector<int> b(32);
        for(int i = 0;i < nums.size() ; i++){
            a.push_back(bitset<32>(nums[i]));
            for(int j = 0 ; j < 32 ;j++){
                if(a[i][j] == 1){
                    b[j]++;
                }
            }
        }
        vector<string> c;
        while(k !=0){
            string l;
            for(int j = 31 ; 0<=j ; j--){
                if(b[j]>0){
                    l.push_back('1');
                    b[j]--;
                }
                else{
                    l.push_back('0');
                }
            }
            c.push_back(l);
            l = "";
            k--;
        }
        vector<unsigned long long int> o;
        for(int i = 0 ; i < c.size() ;i++){
            bitset<32> bits(c[i]);
            o.push_back(bits.to_ulong());
        }

        const long long MOD = 1e9 + 7;
        long long ans = 0;
        for(int i = 0 ; i < o.size() ; i++){
            ans = (ans + (o[i] %MOD) *(o[i] %MOD))%MOD;
        }
        return ans;

        
    }
};