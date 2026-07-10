class Solution {
public:
    string reverseWords(string s) {
        vector<string> p;
        string a = "";
        for(auto i:s){
            if(i == ' '){
                p.push_back(a);
                a = "";
            }
            else{
                a=a+i;
            }
        }
        p.push_back(a);
        
        for(int i = 0 ; i<p.size()/2 ; i++){
            swap(p[i] , p[p.size()-i-1]);
        }
        string str = "";
        for(auto i:p){
            str = str + i;
            if(i == ""){
                continue;
            }
            str = str + ' ';
        }
        str.pop_back();
        return str;

        
        
    }
};