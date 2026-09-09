class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        for (long long p = 1000, commas = 1; p <= n; p *= 1000, commas++) {
            long long end = min(n, p * 1000 - 1);
            ans += (end - p + 1) * commas;
        }

        return ans;
    }
};