class Solution {
public:
    int euclid(int a, int b) {
        while (a != 0 && b != 0) {
            if (a > b)
                a %= b;
            else
                b %= a;
        }
        return a == 0 ? b : a;
    }
    int gcdOfOddEvenSums(int n) {
        int so = 0, se = 0;
        for (int i = 1; i <= 2 * n; i++) {
            if (i % 2 == 0)
                se += i;
            else
                so += i;
        }
        return euclid(so, se);
    }
};