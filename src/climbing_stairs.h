//
// Created by 张啸宇 on 2019-05-01.
//

#ifndef LEETCODE_CLIMBING_STAIRS_H
#define LEETCODE_CLIMBING_STAIRS_H

#include <vector>

using namespace std;

class climbing_stairs {

public:
    int climbStairs(int n) {
        vector<int> memo(static_cast<unsigned long>(n + 1), -1);
        memo[0] = 1;
        memo[1] = 1;
        for (int i = 2; i <= n; ++i) {
            memo[i] = memo[i - 1] + memo[i - 2];
        }
        return memo[n];
    }
};


#endif //LEETCODE_CLIMBING_STAIRS_H
