class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

        for(int i = 0; i < fruits.size() ; i++){
            for(int j = 0; j<baskets.size() ; j++){
                if(baskets[j] != -1 && fruits[i]<=baskets[j]){
                    fruits[i]=-1;
                    baskets[j]=-1;
                    break;
                }
            }
        }
        int a = 0;
        for(int i = fruits.size()-1 ;i>=0 ; i--){
            if(fruits[i]!=-1)
                a++;
        }
        return a;

        
    }
};