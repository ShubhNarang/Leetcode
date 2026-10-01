class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int a = 0;
        for(int i:gain){
            a = i+a;
            if(a>highest){
                highest = a;
            }
        }
        return highest;

        
    }
};