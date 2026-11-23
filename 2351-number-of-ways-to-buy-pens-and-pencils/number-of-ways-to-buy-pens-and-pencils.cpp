class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long count = 0;
        for(int i = 0 ; i < total/cost1+1;i++){
            int j = total - i*cost1;
            count += j/cost2+1;
        } 
        return count;       
    }
};