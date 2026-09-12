class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v(n);
        int a = 1;
        for(int i = 0 ; i < n ; i++){
            if(a%3 == 0 && a%5 == 0){
                v[i] = "FizzBuzz";
            }
            else if(a%3 == 0){
                v[i] = "Fizz";
            }
            else if(a%5 == 0){
                v[i] = "Buzz";
            }
            else{
                v[i] = to_string(a);
            }
            a++;
        }
        return v;
        
    }
};