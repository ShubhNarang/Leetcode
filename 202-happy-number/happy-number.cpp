class Solution {
    int square(int n){
        int a = 0;
        while(n!=0){
            int b = n%10;
            a = b*b +a;
            n = n/10;
        }
        return a;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n != 1 && s.find(n) == s.end()){
            s.insert(n);
            n=square(n);
        }
        return n==1;
    }
};