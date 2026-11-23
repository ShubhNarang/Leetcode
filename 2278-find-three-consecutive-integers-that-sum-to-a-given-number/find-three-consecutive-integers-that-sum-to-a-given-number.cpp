class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long i = num/3;
        if(num%3!=0) return {};
        return {i-1,i,i+1};

        
    }
};