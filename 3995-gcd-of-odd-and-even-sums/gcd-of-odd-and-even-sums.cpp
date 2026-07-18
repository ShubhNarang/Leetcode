class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = 0;
        int sumeven = 0;
        for(int i = 1 ; i < 2*n+1 ; i++){
            if(i%2 == 0){
                sumeven+=i;
            }
            else{
                sumodd+=i;
            }
        }
        while(sumodd != 0){
            int rem = sumeven%sumodd;
            sumeven = sumodd;
            sumodd = rem;
            ;
        }
        return sumeven; 
               
    }
};