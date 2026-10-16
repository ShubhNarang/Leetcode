class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> mp;
        string a = "";
        for(int i = 0 ; i < paragraph.size() ; i++){
            if(isspace(paragraph[i]) || ispunct(paragraph[i])){
                if(a !=""){
                    mp[a]++;
                }
                a = "";
            }
            else{
                a.push_back(tolower(paragraph[i]));
            }
        }
        if(a !=""){
            mp[a]++;
        }
        for(int i = 0 ; i < banned.size();i++){
            string k = "";
            for(int j = 0 ; j < banned[i].size();j++){
                k.push_back(tolower(banned[i][j]));
            }
            mp[k]=0;
        }
        string b = "";
        int count = 0;
        a = "";
        for(int i = 0 ; i < paragraph.size() ; i++){
            if(isspace(paragraph[i]) || ispunct(paragraph[i])){
                if(mp[a]>count){
                    count =mp[a];
                    b=a;
                }
                a = "";
            }
            else{
                a.push_back(tolower(paragraph[i]));
            }
        }
        if(mp[a]>count){
            count =mp[a];
            b=a;
        }
        return b;




        
    }
};