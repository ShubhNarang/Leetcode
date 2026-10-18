class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count = 0;
        for(int i = 0 ; i < words.size() ; i++){
            int n = 0;
            int x = 0;
            int temp = 0;
            string a = chars;
            for(int j = 0 ; j < words[i].size() ; j++){
                for(int k = 0 ; k<chars.size() ; k++){
                    if(a[k]==words[i][j]){
                        a[k] = ' ';
                        n++;
                        break;
                    }
                    if(k==chars.size()-1){
                        temp = 1;
                    }

                }
                
            }
            if(temp == 1){
                n = x;
                temp = 0;
            }
            else{
                x = n;
            }
            count = count+x;
        }
        return count;
        
    }
};