//
// Created by 张啸宇 on 2019-05-02.
//

#ifndef LEETCODE_INTEGER_BREAK_H
#define LEETCODE_INTEGER_BREAK_H

#include <vector>

using namespace std;

class integer_break {
public:
    int integerBreak(int n) {
        if (n < 4)
            return n - 1;

        vector<int> dp(n + 1, -1);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        for (int i = 4; i <= n; ++i) {
            int maxn = -1;
            for (int j = 1; j < i; ++j) {
                maxn = max(dp[j] * dp[i - j], maxn);
            }
            dp[i] = maxn;
        }
        return dp[n];
    }
};


#endif //LEETCODE_INTEGER_BREAK_H
