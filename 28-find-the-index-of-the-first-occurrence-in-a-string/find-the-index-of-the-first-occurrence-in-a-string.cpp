class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0 ; i < haystack.size() ; i++){
            if(haystack[i]==needle[0]){
                int a=i;
                int count = 0;
                int b = 0;
                while(b<needle.size() && a<haystack.size()&& haystack[a]==needle[b] ){
                    a++;
                    b++;
                    count++;
                }
                if(count == needle.size()){
                    return i;
                }
            }
        }
        return -1;
        
    }
};