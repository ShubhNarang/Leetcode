class Solution {
public:
    int minimumDeletions(string s) {
        int count = 0;
        int b = 0;
        for(int i = 0 ; i<s.size();i++){
            if(s[i]=='b'){
                b++;
            }
            else{
                count=min(count+1,b);
            }
        }
        return count;
        
    }
};