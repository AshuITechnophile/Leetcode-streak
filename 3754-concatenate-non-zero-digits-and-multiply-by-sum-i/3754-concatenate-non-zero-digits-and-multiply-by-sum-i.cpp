class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum =0, i =1;
        long ans = 0;


        while(n){
            int l = n %10;
            if(l != 0){
                sum += l;
                ans += i*l;
                i *= 10;
            }
            n /= 10;
        }
        return ans * sum;
    }
};