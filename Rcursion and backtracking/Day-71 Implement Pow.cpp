// User function Template for C++
class Solution {
  public:
    double power(double b, int e) {
        if(e==0) return 1.0;
        if(e<0){
            b = 1/b;
            e = -e;
        }
        double x = power(b, e/2);
        double ans = x*x;
        if(e%2 != 0) ans *= b;
        return ans;
    }
};
