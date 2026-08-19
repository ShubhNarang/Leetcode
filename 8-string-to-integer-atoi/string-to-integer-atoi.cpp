class Solution {
public:
    int myAtoi(string s) {
        long long int a = 0;
        int b = 1;
        int c = 0;
        for(int i = 0 ; i<s.size() ; i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
                break;
            }
            else if(c == 0 && s[i] == '-'){
                b = -1;
                c = 1;
            }
            else if(c == 0 && s[i] == '+'){
                b = 1;
                c = 1;
            }
            else if((c == 1 || c == 2) && s[i] ==' '){
                break;
            }
            else if(s[i] == '-' || s[i] == '+'){
                break;
            }
            else if(c == 0  && s[i] == ' '){
                continue;
            }
            else if(s[i] == '.'){
                break;
            }
            else if(s[i]>='0' && s[i]<='9'){
                int digit = s[i] - '0';
                if(b == 1 && (a > INT_MAX / 10 || (a == INT_MAX / 10 && digit > 7))){
                    return INT_MAX;
                }
                if(b == -1 && (a > INT_MAX / 10 || (a == INT_MAX / 10 && digit > 8))){
                    return INT_MIN;
                }
                a = a*10 + (s[i]-'0');
                c = 2;
            }
        }
        a = a * b;
        return a;
    }
};