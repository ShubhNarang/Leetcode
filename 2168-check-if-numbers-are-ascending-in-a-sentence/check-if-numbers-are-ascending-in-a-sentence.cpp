class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = 0;
        bool isasc;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&&s[i]<='9'){
                if(i+1<s.size()&&s[i+1]==' '){
                    int a = s[i]-'0';
                    if(a>prev){
                        prev = a;
                    }
                    else{
                        return false;
                    }
                }
                else if(i+1<s.size()&&s[i+1]!=' '){
                    int a = s[i]-'0';
                    int b = i;
                    while(b+1<s.size()&&s[b+1]!=' '){
                        a = a*10 + s[b+1]-'0';
                        b++;
                        i++;
                    }
                    if(a>prev){
                        prev = a;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    int a = s[i]-'0';
                    if(a>prev){
                        prev = a;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};