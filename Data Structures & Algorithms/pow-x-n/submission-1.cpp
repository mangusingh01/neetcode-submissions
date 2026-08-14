class Solution {
public:
    double calc(double x, long n) {
        if(n == 1) return x;
        double temp = calc(x, n/2);
        if(n%2 == 1) {
            return temp*temp*x;
        }
        return temp*temp;
    }
    double myPow(double x, int n) {
        if (n == 0) return 1;

        bool neg; 
        neg = n<0; 
        long p = abs(n); 

        double ans = calc(x, p); 

        return neg ? 1/ans: ans;
    }
};
