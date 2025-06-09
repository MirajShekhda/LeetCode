class Solution {
private:
    long long countSteps(long long curr, long long n) {
        long long steps = 0;
        long long first = curr, last = curr;

        while (first <= n) {
            steps += std::min(n + 1, last + 1) - first;
            first *= 10;
            last = last * 10 + 9;
        }

        return steps;
    }

public:
    int findKthNumber(int n, int k) {
        long long curr = 1;
        k--;

        while (k > 0) {
            long long steps = countSteps(curr, n);

            if (steps <= k) {
                curr++;
                k -= steps;
            } else {
                curr *= 10;
                k--;
            }
        }

        return static_cast<int>(curr);
    }
};