class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 2) return n;
        int f1 = 1, f2 = 2, f3;
        for (int i = 0; i < n - 2; i++) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        return f3;
    }
};